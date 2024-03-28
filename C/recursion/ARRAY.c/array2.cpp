#include <stdio.h>
int main()
{
     int a[8],i,e=0,o=0;
     printf("Enter 8 Numbers:\n");
     for(i=0;i<8;i++)
          scanf("%d",&a[i]);
     for(i=0;i<8;i++)
     {
          if(a[i]%2==0)
               e=e+a[i];
          else
               o=o+a[i];
     }
     printf("\nSum of Even Numbers = %d",e);
     printf("\nSum of Odd Numbers  = %d",o);
     return 0;
}

