//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different if yes print 1 otherwise, print 0
//p13

#include<stdio.h>

int main(){
    int x,one,ten,hrd,result;

    printf("Enter 4 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = (x/10)%10;

    result = one==ten;
    
    printf("result=%d\n",result);

    return 0;

}