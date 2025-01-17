//Write a loop program to print sum of 6 to 1
//p4

#include <stdio.h>
int main(){

int x=6,sum=0;

loop:if(x>0)
{   
    sum = sum+x;
    printf("sum=%d\n",sum);

    x=x-1;
    printf("x=%d\n",x);
   
    goto loop;
}
 printf("The sum=%d\n",sum);
}

