#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int x,y,z;
	int *p,*q,*r;
	x=1;
	y=2;
	z=3;
	p=&x;
	q=&y;
	r=&z;
	printf("x is %d \n",x);
	printf("y is %d \n",y);
	printf("z is %d \n",z);
	printf("p is %p \n",p);
	printf("q is %p \n",q);
	printf("r is %p \n",r);
	printf("*p is %d \n",*p);
	printf("*q is %d \n",*q);
	printf("*r is %d \n",*r);
	printf("Swapping pointers.\n");
	int * temp=r; 
	r=p;
	p=q;
	q=temp;
	printf("x is %d \n",x);
	printf("y is %d \n",y);
	printf("z is %d \n",z);
	printf("p is %p \n",p);
	printf("q is %p \n",q);
	printf("r is %p \n",r);
	printf("*p is %d \n",*p);
	printf("*q is %d \n",*q);
	printf("*r is %d \n",*r);
	
	
	
}