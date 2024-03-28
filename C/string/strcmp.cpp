#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	printf("enter two strings: ");
	gets(s1);
	gets(s2);
	
	if(!strcmp (s1,s2))
	  printf("String are same ");
	else
	  printf("String are not same ");
	    
	
	return 0;
}
