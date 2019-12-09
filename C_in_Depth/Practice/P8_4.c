/*
print the sizd of pinter variable and sizeo f value
*/
#include<stdio.h>
main(){
	char a='x', *pc=&a;
	int b=25, *pi=&b;
	float c=12.5, *pf=&c;
	printf("sizeof(pc) = %d, sizeof(*pc) = %d Address =%u\n",sizeof(pc), sizeof(*pc), pc);
	printf("sizeof(pi) = %d, sizeof(*pi) = %d Address =%u\n",sizeof(pi), sizeof(*pi), pi);
	printf("sizeof(pf) = %d, sizeof(*pf) = %d Address =%u\n",sizeof(pf), sizeof(*pf), pf);
	pc++;
	pi++;
	pf++;
	printf("After postincrementing incrementing pc, pi, and pf \n");
	printf("sizeof(pc) = %d, sizeof(*pc) = %d Address =%u\n",sizeof(pc), sizeof(*pc), pc);
	printf("sizeof(pi) = %d, sizeof(*pi) = %d Address =%u\n",sizeof(pi), sizeof(*pi), pi);
	printf("sizeof(pf) = %d, sizeof(*pf) = %d Address =%u\n",sizeof(pf), sizeof(*pf), pf);
}
