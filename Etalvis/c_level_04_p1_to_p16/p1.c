//Write a loop program to print 1 to 5 on one by one 
//p1

#include <stdio.h>
int main(){

int x=1;

loop:if(x<6)
{
     printf("%d\n",x);
     x=x+1;
    goto loop;
}

}