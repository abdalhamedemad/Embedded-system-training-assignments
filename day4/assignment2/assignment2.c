#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int  MIn(int * arr,int n);
int  Max(int * arr,int n);
int  passedinclass(int * arr,int n);
int  failedinclass(int * arr,int n);
int  suminclass(int * arr,int n);
int main(){
	
	//printf("enter  elements in array :");
	
	int arr1[10]={90,80,20,10,70,30,53,48,45,99};
	int arr2[10]={80,60,25,18,17,33,43,68,75,89};
	int arr3[10]={95,70,50,55,60,70,100,20,45,49};
	int min=MIn(arr1,10);
	int max=Max(arr1,10);
	if(MIn(arr2,10)<min)
	{
		min=MIn(arr2,10);
	}
	if(MIn(arr3,10)<min)
	{
		min=MIn(arr3,10);
	}
	if(Max(arr2,10)>max)
	{
		max=Max(arr2,10);
	}
	if(Max(arr3,10)>max)
	{
		max=Max(arr3,10);
	}
	printf("number of passed students : %d \n",passedinclass(arr1,10)+passedinclass(arr2,10)+passedinclass(arr3,10));
	printf("number of failed students : %d \n",failedinclass(arr1,10)+failedinclass(arr2,10)+failedinclass(arr3,10));
	printf("Minimum grade in classes is : %d \n",min);
	printf("Maximum grade in classes is : %d \n",max);
	printf("average grade : %d \n",(suminclass(arr1,10)+suminclass(arr2,10)+suminclass(arr3,10))/30);
	
	
	
	
}

int  suminclass(int * arr,int n){
	
	int c=0;
	for (int i=0; i<n ;i++)
	{
		
			c+=arr[i];
		
		
	}
	
	
	return c;
	
}
int  passedinclass(int * arr,int n){
	
	int c=0;
	for (int i=0; i<n ;i++)
	{
		if(  arr[i]>=50)
			c++;
		
		
	}
	
	
	return c;
	
}
int  failedinclass(int * arr,int n){
	
	int c=0;
	for (int i=0; i<n ;i++)
	{
		if(  arr[i]<50)
			c++;
		
		
	}
	
	
	return c;
	
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