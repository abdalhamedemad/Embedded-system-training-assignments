#include<stdio.h>

int main(){
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	printf("please enter Number 1 :");
	scanf("%d",&x1);
	printf("please enter Number 2 :");
	scanf("%d",&x2);
	printf("please enter Number 3 :");
	scanf("%d",&x3);
	printf("please enter Number 4 :");
	scanf("%d",&x4);
	printf("please enter Number 5 :");
	scanf("%d",&x5);
	printf("please enter Number 6 :");
	scanf("%d",&x6);
	printf("please enter Number 7 :");
	scanf("%d",&x7);
	printf("please enter Number 8 :");
	scanf("%d",&x8);
	printf("please enter Number 9 :");
	scanf("%d",&x9);
	printf("please enter Number 10 :");
	scanf("%d",&x10);
	int x;
	printf("please the value to search : ");
	scanf("%d",&x);
	
	if(x==x1)
	{
		printf("value exist at position 1");
	}else if(x==x2){
		printf("value exist at position 2");
	}else if(x==x3){
		printf("value exist at position 3");
	}else if(x==x4){
		printf("value exist at position 4");
	}else if(x==x5){
		printf("value exist at position 5");
	}else if(x==x6){
		printf("value exist at position 6");
	}else if(x==x7){
		printf("value exist at position 7");
	}else if(x==x8){
		printf("value exist at position 8");
	}else if(x==x9){
		printf("value exist at position 9");
	}else if(x==x10){
		printf("value exist at position 10");
	}else {
		printf("value not exist");
	}
	
}