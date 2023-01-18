#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add ()
{
	printf("Add: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x + y is : %d \n",x+y);
	
}
void sub ()
{
	printf("subtract: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x - y is : %d \n",x-y);
	
}
void mult ()
{
	printf("Multiply: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x * y is : %d \n",x*y);
	
}
void divi ()
{
	printf("divide: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x / y is : %d \n",x/y);
	
}
void and ()
{
	printf("and: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x & y is : %d \n",x&y);
	
}
void or ()
{
	printf("or: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x | y is : %d \n",x|y);
	
}
void not ()
{
	printf("not: \n");
	int x;
	printf("enter x : ");
	scanf("%d",&x);
	
	printf(" ~x is : %d \n",~x);
	
}
void xor ()
{
	printf("xor: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x ^ y is : %d \n",x^y);
	
}
void remain ()
{
	printf("remainder: \n");
	int x,y;
	printf("enter x : ");
	scanf("%d",&x);
	printf("enter y : ");
	scanf("%d",&y);
	printf("x % y is : %d \n",x%y);
	
}
void inc ()
{
	printf("increment: \n");
	int x;
	printf("enter x : ");
	scanf("%d",&x);
	
	printf("x++ is : %d \n",x++);
	
}
void dec ()
{
	printf("decrement: \n");
	int x;
	printf("enter x : ");
	scanf("%d",&x);
	
	printf("x-- is : %d \n",x--);
	
}
int main(){
	printf("enter op ip \n");
	int x;
	scanf("%d",&x);
	if(x==1)
	{
		add();
	}else if(x==2) {
		sub();
	}else if(x==3) {
		mult();
	}else if(x==4) {
		divi();
	}else if(x==5) {
		and();
	}else if(x==6) {
		or();
	}else if(x==7) {
		not();
	}else if(x==8) {
		xor();
	}else if(x==9) {
		remain();
	}else if(x==10) {
		inc();
	}else if(x==2) {
		dec();
	}
	
}