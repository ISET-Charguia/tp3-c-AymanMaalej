/*
 ============================================================================
 Name        : TP3Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void) {
	int r, a, b;
	do {
		printf("donner un entier naturelle non nul a:");
		fflush(stdout);
		scanf("%d", &a);
		printf("donner un entier naturelle non nul b:");
		fflush(stdout);
			scanf("%d", &b);


	} while (a < 0 || b < 0 || a<=b);
	do{
	r=a%b;
	if(r!=0){
a=b;
b=r;}
	else
		printf("PGCD=%d",b);
}while(r!=0);
;
return 0;
}
