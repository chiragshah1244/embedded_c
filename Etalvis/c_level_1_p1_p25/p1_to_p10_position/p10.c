//Get a 3 digit number from user and print the ten's digit.
//p10

#include <stdio.h> 

int main() {
    int x,y;
    printf("Enter a 3 digit number:");
    scanf("%d",&x);
    y = (x/10)%10;  
    
    printf("The digit in one's position is %d\n",y);
    }
    



