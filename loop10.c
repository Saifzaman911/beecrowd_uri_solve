#include <stdio.h>
int main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++){
    printf("%d ",2*i-1);
    sum+=2*i-1;
   }
   printf("\nthe sum of odd natural number %d is:%d\n",n,sum);
   return 0;
}
