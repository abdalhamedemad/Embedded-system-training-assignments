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
		int b=0;
		for(int i=0;i<3;i++){
		printf("please enter your pass :");
		scanf("%d",&y);
		
		if (y==pass){
			printf("user name : %s",name);
			b=1;
			break;
		}
		else{
			
			if(i!=2)
			{
				printf("incorrect password \n");
				printf("try again \n");
			}
		}
		}
		if(!b)
		printf("incorrect password for 3 times no more tries");
	}
	else{
		printf("id not found");
	}
	
}