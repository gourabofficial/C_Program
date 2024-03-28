#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char targetch;
    int i,count = 0;
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter the character to count: ");
    scanf("%c",&targetch);
    
    for(i = 0; str[i]; i++)
    {
    	if(str[i] == targetch)
    	{
    		count++;
		}
	} 
	 printf("The character '%c' appears %d times in the string.\n",targetch,count);
    return 0;
}

