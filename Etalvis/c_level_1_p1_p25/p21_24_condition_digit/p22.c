// Get a number from the user and subtract 5 from that number if the number's ten's position digit is odd,then print the result. Do not use "if"
//p22 
#include <stdio.h> 

   int main(){

    int x,one,ten,hrd,ten_sub,result_1,result;

    printf("Enter any 3 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = (x/10)%10;
    hrd = x/100;

    printf("one=%d\n",one);
    printf("ten=%d\n",ten);
    printf("hrd=%d\n",hrd);

    result = (ten%2==0) ? x : x-5;
   
    printf("result = %d",result);


    return 0;
   }