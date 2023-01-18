#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int * MInMAx(int * arr,int n);
int main(){
	int n;
	printf("please enter the size of array :");
	scanf("%d",&n);
	printf("enter 5 elements in array :");
	int * arr=(int*) malloc(n* sizeof(int));
	int min=999;
	int max=-999;
	for (int i=0; i<n ;i++)
	{
		
		scanf("%d",&arr[i]);
		
	
	}
	int *arr2=MInMAx(arr,n);
	printf("Minimum element in array is : %d \n",arr2[0]);
	printf("Maximum element in array is : %d \n",arr2[1]);
	
}

int * MInMAx(int * arr,int n){
	int min=999;
	int max=-999;
	for (int i=0; i<n ;i++)
	{
		if( min > arr[i])
			min = arr[i];
		
		if(max < arr[i])
			max = arr[i];
	}
	int * arr2=(int*) malloc(2* sizeof(int));
	arr2[0]=min;
	arr2[1]=max;
	return arr2;
	
}