#include<stdio.h>
#include<string.h>

int main(){
	char s1[20];
	char s2[20];
	
	scanf("%s",&s1);
	int x=0;
	for(int i=strlen(s1)-1;i>=0;i--)
	{
		s2[x]=s1[i];
		x++;
		
	}
	s2[x+1]='\0';
	printf("Original string is : %s",s1);
	printf("reversed string is : %s",s2);
}