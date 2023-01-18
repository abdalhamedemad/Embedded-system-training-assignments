#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int * MInMAx(int * arr,int n);
int main(){
	char array1[20]={1,3,5,7,9,11,13,15,17,19};
	char array2[10]=  {2,4,6,8,10,12,14,16,18,20};
	int x=0;
	for(int i=10;i<20;i++)
	{
		array1[i]=array2[x];
		x++;
	}
	int temp;
	for(int x = 0; x < 20 - 1; x++){       

        for(int y = 0; y < 20 - x - 1; y++){          

            if(array1[y] > array1[y + 1]){               

                temp = array1[y];

                array1[y] = array1[y + 1];

                array1[y + 1] = temp;

            }

        }

    }
	
	 for(int i = 0; i < 20; i++){

        printf("%d  ", array1[i]);

    }

		
}
