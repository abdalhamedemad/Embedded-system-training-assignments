#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int  MIn(int * arr,int n);
int  Max(int * arr,int n);
int main(){
	
	printf("enter 4 elements in array :");
	
	int arr[4];
	for (int i=0; i<4 ;i++)
	{
		
		scanf("%d",&arr[i]);
		
	
	}
	
	printf("Minimum element in array is : %d \n",MIn(arr,4));
	printf("Maximum element in array is : %d \n",Max(arr,4));
	
}

int  MIn(int * arr,int n){
	int min=999;
	
	for (int i=0; i<n ;i++)
	{
		if( min > arr[i])
			min = arr[i];
		
		
	}
	
	
	return min;
	
}
int  Max(int * arr,int n){
	
	int max=-999;
	for (int i=0; i<n ;i++)
	{
		
		
		if(max < arr[i])
			max = arr[i];
	}
	
	
	return max;
	
}