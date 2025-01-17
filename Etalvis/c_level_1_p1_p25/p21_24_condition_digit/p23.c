 //Get a 2 digit numbe from user and subtract 5 from that number if the sum of the digits of the number is odd then print the result. do not use "if"
 //p23
    #include<stdio.h>

    int main(){
        
        int x,sum,one,ten,result;
        printf("Enter 2 digit number");
        scanf("%d",&x);
        one = x%10;
        ten = x/10;

        printf("one=%d\n",one);
        printf("ten=%d\n",ten);

        sum = one+ten;
        result = (sum%2==0) ? x : x-5;

        printf("result=%d",result);
        
        return 0;
    } 