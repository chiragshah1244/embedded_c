//Get a 4 digit number from user and only reverse the first 2 digits of the number, then print the number
//p15

#include <stdio.h> //p15
    int main() {
    int reverse,one,ten,hrd,thd,x;
    printf("Enter 3 digit number:");
    scanf("%d",&x);
    
    one = x%10;
    ten = (x/10)%10;
    hrd = (x/100)%10;
    thd = (x/1000);
  
    printf("one=%d\n",one);
    printf("ten=%d\n",ten);
    printf("hrd=%d\n",hrd);
    printf("thd=%d\n",thd);

    reverse = (thd*1000)+(hrd*100)+(one*10)+ten;

    printf("reverse=%d\n",reverse);
    return 0;
    }