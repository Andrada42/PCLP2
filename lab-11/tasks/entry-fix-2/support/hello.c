// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

static void hi(void)
{
	puts("Hi!");
}

static void bye(void)
{
	puts("Bye!");
}

static int main(void)
{
	hi();
	bye();
}
