//Get a 3 digit number from the user and print the reverse of the number
//p14

#include <stdio.h> //p14
int main() {
    int reverse,one,ten,hrd,x;
    printf("Enter 3 digit number:");
    scanf("%d",&x);
    
    one = x%10;
    ten = (x/10)%10;
    hrd = (x/100);
  
    printf("one=%d\n",one);
    printf("ten=%d\n",ten);
    printf("hrd=%d\n",hrd);

    reverse = (one*100)+(ten*10)+hrd;
    printf("reverse=%d\n",reverse);
    return 0;
    }