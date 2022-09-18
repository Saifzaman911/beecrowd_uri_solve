#include<stdio.h>
int main(){
 int i,j;
 printf("input number of term: ");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        printf("the number is : %d the cube of the %d is:%d\n",i,i,(i*i*i));
    }

return 0;
}
