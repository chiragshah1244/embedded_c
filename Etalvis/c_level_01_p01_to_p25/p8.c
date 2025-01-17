//Get a 3 digit number from user and print the one's digit.
//p8

#include <stdio.h> 

int main() {
    int x,y;
    printf("Enter a 3 digit number:");
    scanf("%d",&x);

    y = x%10;  
    printf("The digit in one's position is %d\n",y);
    
    }
    



