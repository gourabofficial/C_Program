#include<stdio.h>
int ReverseNaturalNumber(int n);

int main(){ 
    int n;
    printf("enter a number ");
    scanf("%d",&n);
	printf("First %d natural numbers in reverse order: ", n);
	ReverseNaturalNumber(n);

	return 0;

}
 int ReverseNaturalNumber(int n) {
  	    if(n%2==2){
  		ReverseNaturalNumber( n - 1);
  		printf("%d",n);
  		return n;
	  }
  }

