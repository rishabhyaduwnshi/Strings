#include<stdio.h>
#include<stdlib.h>

int findLength(char *x)
{
	int i,count = 0;
	for(i=0;x[i]!='\0';i++)
	count++;
	return count;
}

void stringReverse(char X[],char Y[],int length)
{
	int i,j;
	for(i=length-1,j=0;i>=0;i--,j++)
	{
		Y[j] = X[i];
	}
}

int main()
{
	int length;
	char string[100],*reverse;
	printf("Enter a string : ");
	scanf("%s",string);
	
	
    length = findLength(string);
    reverse = (char *)malloc(length*sizeof(char));
    
    stringReverse(string,reverse,length);
    printf("%s",reverse);
    
	
	
}
