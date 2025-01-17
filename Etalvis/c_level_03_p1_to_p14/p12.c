//Get a 2 digit number from the user and check if the digit 0 is greater than or equal to digit 1. if yes print "success" otherwise print "Failure"
//p12

#include<stdio.h>

int main() {
    int x, one,ten,result;
    printf("Enter 2 digit number");
    scanf("%d",&x);

    one = x%10;
    ten= x/10;

    printf("one=%d\n",one);
    printf("ten=%d\n",ten);

    if(one <= ten) //p12

    printf("success");
    else
    printf("Failure");

return 0;
}