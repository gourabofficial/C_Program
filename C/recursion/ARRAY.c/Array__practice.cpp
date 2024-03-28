#include<stdio.h>
int main(){
	int a[5],max,i;

	printf("enter value in array: ");
	
	for(i=0;i<5;i++){
		
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
			
		}
	}
	     printf("maximam value of array is %d",max);
	     return 0;
	}
