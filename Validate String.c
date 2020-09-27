    #include<stdio.h>
     
    int validateString(char *S)
    {
    int i;
    for(i=0;S[i]!='\0';i++)
    {
    	if(!(S[i] >= 65 && S[i] <= 90 ) && !(S[i] >=97 && S[i] <= 122) && !(S[i] >= 48 && S[i] <= 57))
    	return 0;
    }
    return 1;//This statement was missing
    }
    int main()
    {
    int x;
    char string[100];
    printf("Enter a string : ");
    scanf("%s",string);
    if(validateString(string))
    printf("String Is Valid ");
    else
    printf("Invalid String ");
    }
