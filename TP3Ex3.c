/*
 ============================================================================
 Name        : TP3Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int x, n, i;
	do {
		printf("donner un entier a verifier:");
		fflush(stdout);
		scanf("%d", &x);
	} while (x <= 0);
	n = 1;
	for (i = 2; i < x+1; i++) {
		if (x % i == 0)
			n++;
	}
	if (n== 2) {
		printf("%d est premier", x);
		fflush(stdout);
	} else {
		printf("%d n'est pas premier", x);
		fflush(stdout);
	}
}
