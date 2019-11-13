/*
print the sizd of pinter variable and sizeo f value
*/
#include<stdio.h>
main(){
	char a='x', *pc=&a;
	int b=25, *pi=&b;
	float c=12.5, *pf=&c;
	double d=22.5, *pd=&d;
	printf("sizeof(pc) = %d, sizeof(*pc) = %d\n",sizeof(pc), sizeof(*pc));
	printf("sizeof(pi) = %d, sizeof(*pi) = %d\n",sizeof(pi), sizeof(*pi));
	printf("sizeof(pf) = %d, sizeof(*pf) = %d\n",sizeof(pf), sizeof(*pf));
	printf("sizeof(pd) = %d, sizeof(*pd) = %d\n",sizeof(pd), sizeof(*pd));
}
