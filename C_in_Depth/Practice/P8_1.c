/*
Print address of Variable Usind address operator
*/

#include<stdio.h>
main(){
	int age=30;
	float sal=1500.00;
	printf("Val of age=%d, Address of age = %p\n",age, &age);
	printf("Val of sal=%.2f, Address of sal = %p\n",sal, &sal);
}
