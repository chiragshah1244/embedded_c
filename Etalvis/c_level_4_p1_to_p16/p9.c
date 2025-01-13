// Write a loop program to print the sum of 2 digit odd numbers, whose ten's digit is 7.
// p9

#include <stdio.h>

int main(){
    int sum=0,x=10,one,ten;

  loop :  if(x<100)
    {
    one = x%10;
    ten = x/10;
    sum = one+ten;

    if(ten==7)
    printf("sum=%d\n",sum);
    x=x+1;
    goto loop;
}
}


