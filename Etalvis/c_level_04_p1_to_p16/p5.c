//Write a loop program to print odd numbers between 1 and 9
//p5

#include <stdio.h>
int main(){

int x=1;

loop:if(x<10)
{       
    printf("x=%d\n",x);
    x=x+2;

    goto loop;
}
}