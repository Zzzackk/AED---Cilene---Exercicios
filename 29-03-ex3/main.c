/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Ex 03 - 29/03/2023

*******************************************************************************/

#include <stdio.h>

int posM(int, int, int);

int main(){

	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("O maior numero esta na posicao %d", posM(a, b, c));

	return 0;
}

int posM(int a, int b, int c){
	if(a>b && a>c)
		return 1;
	else if(b>a && b>c)
		return 2;
	else
		return 3;
}