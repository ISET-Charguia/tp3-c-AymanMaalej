/*
 ============================================================================
 Name        : TP3Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x,y,j,i;
	do {
			printf("donner le nbre de ligne :");
			fflush(stdout);
			scanf("%d", &x);
		} while (x <= 0);
	do {
			printf("donner le nbre d'etoile par ligne :");
			fflush(stdout);
			scanf("%d", &y);
		} while (y <= 0);
	for (i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
			{printf("*");
			fflush(stdout);
			}
		printf("\n");
		fflush(stdout);
	}
}
