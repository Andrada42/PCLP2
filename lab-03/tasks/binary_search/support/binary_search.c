// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "binary_search.h"

int binary_search(int *v, int len, int dest)
{
	int start = 0;
	int end = len - 1;
	int middle;

	/*
	while(start <= end){
		middle = (start + end)/2;
		if(v[middle] == dest)
			return 1;
		if(v[middle] < dest)
			start = middle + 1;
		if(v[middle] > dest)
			end = middle - 1;
	}
	*/

	corp_while:
		if(start > end)
			goto negasit;

		middle = (start + end)/2;

		if(v[middle] == dest)
			goto gasit;

		if(v[middle] < dest)
		 	goto cond_mic;

		if(v[middle] > dest)
			goto cond_mare;

		goto corp_while;

	cond_mic:
	 	start = middle + 1;
	 	goto corp_while;

	cond_mare:
		end = middle - 1;
		goto corp_while;

	gasit:
		return middle;
	
	negasit:
		return -1;
}
