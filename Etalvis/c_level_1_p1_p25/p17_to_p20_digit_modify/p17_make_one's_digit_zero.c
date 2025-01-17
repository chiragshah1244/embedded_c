//Get a 2 digit number from the user, make the one's digit 0,then print it.
//p17

#include<stdio.h>
int main() {
    int result,one,ten,x;
    printf("Enter a two digit number:");
    scanf("%d",&x);
    
    ten = x/10;

    result = ten*10;
    printf("result=%d\n",result);
    return 0;
    }