// Write a loop program to print 2-digit even numbers, who's sum of digits are 6.
// p8


#include <stdio.h>
int main(){

int x=10,sum=0,one,ten;

loop : if(x<100)
{       
        one = x%10;
        ten = x/10;
        sum = one+ten;
        if(sum==6)
        printf("x=%d\n",x);
         x = x+2;
goto loop;
}

}