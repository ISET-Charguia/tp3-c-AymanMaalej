/*
 ============================================================================
 Name        : TP3Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int x, d, r ;
	do {
		printf("donner un nbre decimale:");
		fflush(stdout);
		scanf("%d", &x);
	} while (x <= 0);
	d = x;
	printf("\n le resultat sera inversee:  \n");
	do {
		r = d % 2;
		d = d / 2;
		printf("%d", r);
	} while (d != 0);
}
