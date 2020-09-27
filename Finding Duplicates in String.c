#include<stdio.h>
#include<stdlib.h>

void findDuplicates(char *X,int *hash)
{
	int i;
	for(i=0;X[i]!='\0';i++)
	hash[X[i]-97]+=1;
}

int main()
{
	int i;
	int hashArray[27] = {0};
	char string[100];
	printf("Enter a string : ");
	scanf("%s",string);
	findDuplicates(string,hashArray);
	
	for(i=0;i<27;i++)
	{
		if(hashArray[i]>1)
		printf("%c has %d duplicate \n",i+97,hashArray[i]);
	}
}
