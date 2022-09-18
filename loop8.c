
#include<stdio.h>
int main(){
 int i,j;
 printf("input number of term: ");
    scanf("%d",&j);
    for(i=1;i<=106752899;i++)
    {
        printf("%d x %d = %d\n",j,i,j*i);
    }

return 0;
}
