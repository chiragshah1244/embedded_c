// Write a program to get a number from user and print the sum of all digits

#include<stdio.h>

int main(){
    int x,sum=0,one,ten,hrd;

    printf("Enter any number");
    scanf("%d",&x);

    if(x==0){
    sum = x;
    }

    else if(x<10){
    sum = x;
    }

    else if(x<100)
    {
    one = x%10;
    ten = x/10;
    sum = one+ten;
    
    }

    else if(x<1000)
    {
    one = x%10;
    ten = (x/10)%10;
    hrd = x/100;
    sum = one+ten+hrd;
    }

    else if(x<10000)
    {
    one = x%10;
    ten = (x/10)%10;
    hrd = x/100;
    sum = one+ten+hrd;
    }
    printf("sum=%d\n",sum);
   
}