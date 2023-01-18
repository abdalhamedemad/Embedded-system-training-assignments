#include<stdio.h>

int main(){
	int x,y,z;
	int ID,pass;
	char name [5]="ahmed";
	ID=1234;
	pass=231;
	printf("please enter ID :");
	scanf("%d",&x);
	if(x==ID)
	{
		printf("please enter your pass :");
		scanf("%d",&y);
		if (y==pass){
			printf("user name : %s",name);
		}
		else{
			printf("incorrectpassword");
		}
		
	}
	else{
		printf("id not found");
	}
	
}