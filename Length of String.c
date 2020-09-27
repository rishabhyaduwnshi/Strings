#include<stdio.h>

int findLength(char *x)
{
	int i,count = 0;
	for(i=0;x[i]!='\0';i++)
	count++;
	return count;
}
int main()
{
	char s[100];
	printf("Enter a charcter ");
	scanf("%s",s);
	printf("The length of charcater is %d",findLength(s));
	
	
}
