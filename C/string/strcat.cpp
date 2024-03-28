#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	printf("enter two string : ");
	gets(s1);
	gets(s2);
	printf("%s ",strcat(s1,s2));
	
	return 0;
	
}
