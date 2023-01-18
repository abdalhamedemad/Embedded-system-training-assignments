#include<stdio.h>
int main(){
	
	int h;
	printf("please enter the hieght :");
	scanf("%d",&h);
	int c=1;
	for(int i=1;i<=h;i++)
	{
		for(int j=0; j<h-i;j++)
			printf(" ");
		for(int k=0;k<c;k++)
			printf("*");
		printf("\n");
		c+=2;
	}
}