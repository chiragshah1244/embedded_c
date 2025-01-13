//Get a 3 digit number from the user, make the one's digit 2,then print it.
//p19

#include <stdio.h> 
    int main() {
    int result,one,ten,hrd,x;
    printf("Enter a two digit number:");
    scanf("%d",&x);
    
    one = x%10;
    ten = (x/10)%10;
    hrd = (x/100);
  
    printf("one=%d\n",one);
    printf("ten=%d\n",ten);
    printf("hrd=%d\n",hrd);
    

    result = (hrd*100)+(ten*10)+2;

    printf("result=%d\n",result);
    return 0;
    } 