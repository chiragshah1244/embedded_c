//Write a loop program to print 2-digit odd numbers, who's sum of digits are 7.
//p7


#include <stdio.h>
int main(){

int x=11,sum=0,one,ten;

loop : if(x<100)
{       
        one = x%10;
        ten = x/10;
        sum = one+ten;
        if(sum==7)
        printf("x=%d\n",x);
         x = x+2;
goto loop;
}

}