#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	printf("enter two string : ");
	gets(s1);
	
	strcpy (s2,s1);
	printf("%s ",s2);
	
	return 0;
	
}
