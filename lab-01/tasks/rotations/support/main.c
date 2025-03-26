// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

// cd ../support && gcc rotate.c main.c && ./a.out
// cd ../tests && make check

int main(void)
{
	/* TODO: Test functions */

	// Maxim: unsigned int nr = 4294967295;	// 2^32 - 1
	// 31             0
	// 1 1111111...11 1

	// 2147483648 = 2^31
	// 10000000...000

	unsigned int nr1 = 0x80000000;
	printf("rotate_left\n");
	printf("BEFORE: %08x\n", nr1);
	rotate_left(&nr1, 0);
	printf("AFTER:  %08x\n", nr1);

	unsigned int nr2 = 0x00000001;
	printf("rotate_right\n");
	printf("BEFORE: %08x\n", nr2);
	rotate_right(&nr2, 16); 		// = 65536
	printf("AFTER:  %08x\n", nr2);	// 10000

	printf("AFTER:  %d\n", nr2);	// 10000
	return 0;
}
