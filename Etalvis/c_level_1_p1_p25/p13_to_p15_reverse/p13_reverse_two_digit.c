//Get a 2 digit number from the user and print the reverse of the number
//p13

#include <stdio.h> //p13

int main() {
    int reverse,one,ten,x;
    printf("Enter 2 digit number:");
    scanf("%d",&x);
    
    one = x%10;
    ten = (x/10);
  
   
    reverse = (one*10)+ten;
    printf("reverse=%d\n",reverse);
    return 0;
    }
    

  
