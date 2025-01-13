//Get a 3 digit number from the user and print the sum of the digits 
//p12

#include <stdio.h> 

int main() {
    int sum,one,ten,hud,x;
    printf("Enter a 3 digit number:");
    scanf("%d",&x);
    
    one = x%10;
    ten = (x/10)%10;
    hud = x/100;
   
     
    sum = hud+ten+one;
    printf("sum=%d\n",sum);
    return 0;
    }