// Get 4 digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes print "success"; otherwise, print "Failure"
//p13

#include<stdio.h>

int main(){
    int x,one,ten,hrd;

    printf("Enter 4 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = (x/10)%10;

    if(one==ten)
    printf("success");
    else
    printf("Failure");
    
    return 0;

}