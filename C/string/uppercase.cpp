#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char str[20];
	printf("Enter a string:\n ");
	gets(str);
	
	
	for( i=0 ; str[i] ; i++ );
	{
		if( str[i]>='a' && str[i]<='z' )
		str[i] = str[i] - 32;
    }
	 printf("%s",str[i]);

	return 0;
}  
