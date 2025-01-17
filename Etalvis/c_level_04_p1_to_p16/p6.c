//Write a loop program to print 2-digit odd numbers below 20
//p6

#include <stdio.h>
int main(){

int x=11;

loop:if(x<20)
{       
    printf("x=%d\n",x);
    x=x+2;

    goto loop;
}
}

// 