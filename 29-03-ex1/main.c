/******************************************************************************

Isaac Vono Rodrigues - 2AN - AED II - Ex 01 - 29/03/2023

*******************************************************************************/

#include <stdio.h>

int alt(int);
int alt2();


int main(){
	int n=5;
	printf ("\nn = %d antes da chamada de alt", n);
	n = alt (n);
	printf ("\nn = %d depois da chamada de alt", n);
	printf("\n\n\n");
	n=5;
	printf ("\nn = %d antes da chamada de alt2", n);
	alt2();
	printf ("\nn = %d depois da chamada de alt2", n);
	return 0;
}

int alt(int n){
	n = 10;
	printf("\nn = %d dentro da funcao alt", n);
	return n;
}

int alt2(){
	int n = 10;
	printf("\nn = %d dentro da funcao alt2", n);
}

