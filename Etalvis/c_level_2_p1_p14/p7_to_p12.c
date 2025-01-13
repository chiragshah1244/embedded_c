//Get a 2 digit number from the user and check if the digit 0 and digit 1 are identical. if yes print 1; otherwise print 0
//Get a 2 digit number from the user and check if the digit 0 and digit 1 are not identical. if yes print 1; otherwise print 0
//Get a 2 digit number from the user and check if the digit 0 is less than the digit 1. if yes print 1; otherwise print 0
//Get a 2 digit number from the user and check if the digit 0 is greater than the digit 1. if yes print 1; otherwise print 0
//Get a 2 digit number from the user and check if the digit 0 is less than or equal to digit 1. if yes print 1; otherwise print 0
//Get a 2 digit number from the user and check if the digit 0 is greater than or equal to digit 1. if yes print 1; otherwise print 0

#include<stdio.h>

int main(){
    int x,one,ten, result;

    printf("Enter 2 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = x/10;

    //result = one == ten; //p7
    //result = one!= ten; //p8
    //result = one < ten; //p9
    //result = one > ten; //p10
    //result = one >= ten; //p11
    result = one <= ten; //p12

    printf("result=%d\n",result);

    return 0;

}