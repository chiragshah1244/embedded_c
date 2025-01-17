//Write a loop program to print sum of 1 to 5
//p3

#include <stdio.h>
int main(){

int x=0,sum=0;

loop:if(x<6)
{   
    sum = sum+x;
    printf("sum=%d\n",sum);
    
    x=x+1;
    printf("x=%d\n",x);
   
    goto loop;
}
 printf("The sum=%d\n",sum);
}