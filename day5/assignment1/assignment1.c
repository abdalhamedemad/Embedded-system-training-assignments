#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void bubblesort(int * array1,int n);
int main(){
	int array1[10]={7,5,1,0,3,1,5,4,9,2};
	bubblesort(array1,10);


		
}
void bubblesort(int * array1,int n){
	int temp;
		for(int x = 0; x < n - 1; x++){       

        for(int y = 0; y < n - x - 1; y++){          

            if(array1[y] > array1[y + 1]){               

                temp = array1[y];

                array1[y] = array1[y + 1];

                array1[y + 1] = temp;

            }

        }

    }
	
	 for(int i = 0; i < n; i++){

        printf("%d  ", array1[i]);

    }
	
}
