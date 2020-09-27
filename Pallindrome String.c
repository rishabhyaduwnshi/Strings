#include<stdio.h>

int findLength(char *x)
{
	int i,count = 0;
	for(i=0;x[i]!='\0';i++)
	count++;
	return count;
}

int isPallindrome(char *S,int length)
{
	int i,j;
	for(i=0,j=length-1;i<length;i++,j--)
	if(S[i]!=S[j])
	 return -1;
}

int main()
{
	int length,x;
	char string[100];
	printf("Enter a string : ");
	scanf("%s",string);
	length = findLength(string);
	x = isPallindrome(string,length);
	if(x!=-1)
	printf("String is Pallindrome ");
	else
	printf("String is not Pallindrome");
	
}
