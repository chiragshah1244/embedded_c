//Get a 2 digit number from the user and print the sum of the digits 
//p11

#include<stdio.h>

    int main(){
        
        int x,sum,one,ten;
        printf("Enter 2 digit number");
        scanf("%d",&x);
        one = x%10;
        ten = x/10;

        printf("one=%d\n",one);
        printf("ten=%d\n",ten);

        sum = one+ten;
    
        printf("sum=%d",sum);
        
        return 0;
    } 
