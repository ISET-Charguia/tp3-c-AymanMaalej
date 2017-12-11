/*
 ============================================================================
 Name        : TP3Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int n, i, j;
	for (j = 1; j <= 1000; j++) {
		n = 1;
		for (i = 2; i < j; i++) {

			if (j % i == 0)
				n = n + i;
		}
		if(n==j)
			{printf("%d \n",j);
		fflush(stdout);}
	}
}
