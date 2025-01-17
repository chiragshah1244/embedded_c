//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use if
//p21
#include <stdio.h> 

   int main(){

    int x,result;

    printf("Enter any 3 digit number");
    scanf("%d",&x);

    result = (x%2==0) ? x : x-5 ;
    printf("result = %d",result);

    return 0;
   }