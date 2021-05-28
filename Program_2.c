//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10],temp;
  int i=0,j=0;
  printf("enter the string that needs to be reversed");
	scanf("%s", str);
  i=0;
  j=strlen(str)-1;
  while(i<j)
  {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;

  }
  printf("%s",str);


	//Write your code here

	return 0;
}
