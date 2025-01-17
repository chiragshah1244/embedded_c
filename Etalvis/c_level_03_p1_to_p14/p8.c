//Get a 2 digit number from the user and check if the digit 0 and digit 1 are not identical. if yes print "success" otherwise print "Failure"
//p8
#include<stdio.h>

int main() {
    int x, one,ten,result;
    printf("Enter 2 digit number");
    scanf("%d",&x);

    one = x%10;
    ten= x/10;

    printf("one=%d\n",one);
    printf("ten=%d\n",ten);

    if(one!=ten) //p8
  
    printf("success");
    else
    printf("Failure");

return 0;
}