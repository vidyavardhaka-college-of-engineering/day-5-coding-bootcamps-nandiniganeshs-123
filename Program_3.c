//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
  int i=0,n,a=0;
  printf("Enter the string: ");
	scanf("%s", str);
  
  for(i=0;i<n/2;i++)

 {
   
   if (str[i]==str[n-i-1])
   a++;

  
  
 }
 if(a==i)
 {
   printf("palidrome");
 }

	//Write your code here
	
	return 0;
}
