//Write a loop program to print 5 to 1 on one by one 
//p2

#include <stdio.h>
int main(){

int x=5;

loop:if(x>0)
{
     printf("%d\n",x);
     x=x-1;
    goto loop;
}

}