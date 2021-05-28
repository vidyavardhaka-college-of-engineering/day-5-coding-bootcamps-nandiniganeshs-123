//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10],temp;
  int i=0,j=0,a=0;
  printf("Enter the string: ");
	scanf("%s", str);
  i=0;
  j=strlen(str)-1;
 while(str[i]!='\0')
 {
   
   str[i]=str[j];
   str[j]=str[a];
   j--;
   i++;
  
 }
 if(str[i]==str[a])
 {
   printf("palidrome");
 }

	//Write your code here
	
	return 0;
}
