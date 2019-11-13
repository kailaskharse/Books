/*
Program to derefercnce pointer variables
*/
#include<stdio.h>
int main(){
	int a=87;
	float b=4.5;
	int *p1=&a;
	float *p2=&b;
	printf("Valut of P1 = Addr of a =%p\n",p1);
	printf("Valur of P2 = Addr of b =%p\n",p2);
	printf("Addr of P1 = %p\n",&p1);
	printf("Addr of P2 = %p\n",&p2);
	printf("Valud of a = %d %d %d \n",a, *p1, *(&a));
	printf("valud of b = %f %f %f \n", b, *p2, *(&b));
} 
