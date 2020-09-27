#include<stdio.h>

int findAnagram(char X[],char Y[],int hash[])
{
	int i;
	for(i=0;X[i]!='\0';i++)
	hash[X[i]-97]++;
	
	for(i=0;Y[i]!='\0';i++)
	hash[Y[i]-97]--;
	
	for(i=0;i<26;i++)
	{
		if(hash[i]!=0)
	 	return 0;
	}
	
	return 1;
}

int main()
{
	int i,hash[100]={0};
	char s1[100],s2[100];
	
	printf("Enter first string : ");
	scanf("%s",s1);
	
	printf("Enter second string : ");
	scanf("%s",s2);
	
	if(findAnagram(s1,s2,hash))
	{
		printf("String is Anagram ");
	}
	else
		printf("String is not Anagram");
}
