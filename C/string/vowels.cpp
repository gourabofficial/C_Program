#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int i,count =0;
	printf("Enter a string: ");
	gets(str);
	
	for(i=0;str[i];i++)
	{
		if
		(
			str[i] ==  'a'  ||  str[i] == 'A' ||
			str[i] ==  'e'  ||  str[i] == 'E' ||
			str[i] ==  'i'  ||  str[i] == 'I' ||
			str[i] ==  'o'  ||  str[i] == 'O' ||
			str[i] ==  'u'  ||  str[i] == 'U'
		)
		    {
			   count ++;	
	        }
    }
     printf("Number of vowels in the string is %d \n",count);
	return 0;
}
