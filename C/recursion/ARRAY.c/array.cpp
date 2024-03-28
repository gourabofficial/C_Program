#include<stdio.h>
int main(){
	int a[10],i,e=0,o=0;
	printf("\nEnter some number they are even or odd: ");
	for(i=0;i<9;i++)
	    scanf("%d",&a[i]);
	    
	    	for(i=0;i<9;i++){
	    		
	    		if(a[i]%2==0)
	    		e=e+a[i];
	    		
	    		else
	    		o=o+a[i];
	    		
			}
			printf("\nSum of all even number is %d",e);
			printf("\nSum of all odd number is %d",o);
	    
	return 0;
	
}
