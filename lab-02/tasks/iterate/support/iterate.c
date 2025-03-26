// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "iterate.h"
#include "array.h"

void print_chars(void)
{
	unsigned char *char_ptr = (unsigned char *) &v;

	// printf("char_ptr = %ld Bytes \n", sizeof(char_ptr));
	// printf("* char_ptr = %ld Bytes \n", sizeof(*char_ptr));
	// printf("v = %ld Bytes \n", sizeof(v));
	// printf("*v char_ptr = %ld Bytes \n", sizeof(*v));
	// printf("*(v+1) char_ptr = %ld Bytes \n", sizeof(*(v+1)));


	for(int i = 0; i < sizeof(v)/sizeof(*v); i++){
		char_ptr = (unsigned char *)&v[i];
		for(int octet = 0; octet < sizeof(*v); octet++){
			printf("%p -> 0x%x\n", char_ptr + octet, *(char_ptr + octet));
		}
		// for(int octet = 0; octet < sizeof(*v); octet++){
		// 	printf("Adresa: %p Octetul: %d Valoarea: 0x%X\n", char_ptr + octet, octet, *(char_ptr + octet));
		// }
	}
	printf("-------------------------------\n");
}
void print_shorts(void)
{
	/**
	 * TODO: Implement function
	 */
	(void) v;

	printf("-------------------------------\n");
}

void print_ints(void)
{
	/**
	 * TODO: Implement function
	 */
	(void) v;

	printf("-------------------------------\n");
}
