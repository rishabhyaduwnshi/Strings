#include<stdio.h>

void changeCase(char *S)
{
	int i;
	for(i=0;S[i]!='\0';i++)
	{
		if(S[i] >= 97 && S[i] <=122)
		 S[i] = S[i]-32;
		else if(S[i] >= 65 && S[i] <= 90)
		 S[i] = S[i]+32;
	}
	printf("Changed case string is %s ",S);
}
int main()
{
	char string[100];
	printf("Enter a string : ");
	scanf("%s",string);
	changeCase(string);
}
