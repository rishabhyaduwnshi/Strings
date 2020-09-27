#include<stdio.h>

void countVowels(char *X)
{
	int i,countv=0,countc=0;
	for(i=0;X[i]!='\0';i++)
	{
		if(X[i] == 'A' || X[i] == 'a' || X[i] == 'E' || X[i] == 'e' || X[i] == 'O' || X[i] == 'o' || X[i] == 'U' || X[i] == 'u' || X[i] == 'I' || X[i] == 'i')
		countv++;
		else
		countc++;
	}
	printf("The number of Vowels is %d and Consonents is %d",countv,countc);
}
int main()
{
	char S[100];
	printf("Enter a string : ");
	scanf("%s",S);
	countVowels(S);
}
