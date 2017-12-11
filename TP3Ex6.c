/*
 ============================================================================
 Name        : TP3Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x, i, j, k, m;
	do {
		printf("donner le nbre de ligne:");
		fflush(stdout);
		scanf("%d", &x);
	} while (x <= 0);
	k = x - 1;
	m = 1;
	for (i = 1; i <= x; i++)

	{
		for (j = 1; j <= k; j++) {
			printf(" ");
		}
		for (j = 1; j <= m; j++) {
			printf("*");
		}

		for (j = 1; j <= k; j++) {
			printf(" ");
		}
		k--;
		m = m + 2;
		printf("\n");
	}
}
