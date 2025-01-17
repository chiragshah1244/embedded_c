//Get a 2 digit number from the user and check if the digit 0 is greater than digit 1. if yes print "success" otherwise print "Failure"
//p10

#include<stdio.h>

int main() {
    int x, one,ten,result;
    printf("Enter 2 digit number");
    scanf("%d",&x);

    one = x%10;
    ten= x/10;

    printf("one=%d\n",one);
    printf("ten=%d\n",ten);


    if(one > ten) //p10

    printf("success");
    else
    printf("Failure");

return 0;
}