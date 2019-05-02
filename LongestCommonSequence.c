#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int lcs(char *string1,char *string2,int length1,int length2);
int max(int num1,int num2);
char res[50];
int k=0;
int main()
{
	char string1[50],string2[50];
	int length1,length2,i;
	printf("\nEnter first string:");
	scanf("%s",string1);
	printf("\nEnter second string:");
	scanf("%s",string2);
    length1=strlen(string1);
	length2=strlen(string2);
	printf("\nThe length of longest common subsequence is:%d",lcs(string1,string2,length1,length2));
	printf("\n%c",res);
	return 0;
}

int lcs( char *string1, char *string2, int length1, int length2 )
{
   if (length1 == 0 || length2 == 0)
     return 0;
   if (string1[length1-1] == string2[length2-1])
    {
    	res[k++]=string1[length1-1];
     return 1 + lcs(string1, string2, length1-1, length2-1);
    }
   else
     return max(lcs(string1, string2, length1, length2-1), lcs(string1, string2, length1-1, length2));
}

int max(int num1,int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}
