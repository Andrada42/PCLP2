// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

int set_bit(unsigned int nr, int val, int i){
	if(val==0)
		nr = nr & ~(1<<i);
	else
		nr = nr | (1<<i);
}

void rotate_left(unsigned int *number, int bits)
{
	int i = 0, newnr = 0, poz = 0, currentbit;

	// Mutarea primilor bits biti de la inceput la final
	for(i = 0; i < bits; i++){
		poz = bits - i - 1;		// poz pe care trebuie pus bitul
		currentbit = (*number >> (31 - i)) & 1;	// bitul de pe poz 31 - i, 1/0
		newnr = newnr | currentbit << poz;
	}
	// printf("%08x\n", newnr);

	// Mutarea celorlalti biti
	for(i = 31 - bits; i >= 0; i--){
		poz = i + bits; 	// poz pe care trebuie pus bitul
		currentbit = (*number >> i) & 1; // bitul de pe poz i, 1/0
		newnr = newnr | currentbit << poz;
	}
	// printf("%08x\n", newnr);
	*number = newnr;
}

void rotate_right(unsigned int *number, int bits){
	int i = 0, newnr = 0, poz = 0, currentbit;

	// Mutarea ultimilor bits biti de la final la inceput
	for(i = bits - 1; i >= 0; i--){
		poz = 31 - (bits - i - 1);
		currentbit = (*number >> i) & 1;
		newnr = newnr | currentbit << poz;
	}
	// printf("%08x\n", newnr);

	// Mutarea celorlalti biti
	for(i = 31; i >= bits; i--){
		poz = i - bits;
		currentbit = (*number >> i) & 1;
		newnr = newnr | currentbit << poz;
	}
	// printf("%08x\n", newnr);
	*number = newnr;
}
