/*
 ============================================================================
 Name        : TP3Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int n, f, i;
	do {
		printf("donner un entier :");
		fflush(stdout);
		scanf("%d", &n);
	} while (n < 0);
	f = 1;
	i = 1;
	if (n == 0) {
		f = 1;
	} else
		while (i <= n) {
			f *= i;
			i++;
		}
	printf("%d != %d \n", n, f);
	do {
			printf("donner un entier :");
			fflush(stdout);
			scanf("%d", &n);
		} while (n < 0);
		f = 1;
		i = 1;
		if (n == 0) {
			f = 1;
		} else
			do {
				f *= i;
				i++;
			}while (i <= n);
		printf("%d != %d \n", n, f);
		do {
					printf("donner un entier :");
					fflush(stdout);
					scanf("%d", &n);
				} while (n < 0);
				f = 1;
				i = 1;
				if (n == 0) {
					f = 1;
				} else
					for(i=1;i<=n;i++) {
						f *= i;
					};
				printf("%d != %d \n", n, f);
}/*a mon avis le boucle for est la plus naturelles*/
