#include<stdio.h>

int main(){
	int x,y,z;
	printf("please enter Number 1 :");
	scanf("%d",&x);
	printf("please enter Number 2 :");
	scanf("%d",&y);
	printf("please enter Number 3 :");
	scanf("%d",&z);
	int max=x;
	
	if(max<y)
	{
		max=y;
	}
	if(max<z)
	{
		max=z;
	}
	printf("the max is :%d",max);
	
}