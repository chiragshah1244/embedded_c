//Get a 2 digit number from the user and check if the digit 0 is less than the digit 1. if yes print 1; otherwise print 0
//p9

#include<stdio.h>

int main(){
    int x,one,ten, result;

    printf("Enter 2 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = x/10;

    result = one < ten; //p9
    
    printf("result=%d\n",result);

    return 0;

}