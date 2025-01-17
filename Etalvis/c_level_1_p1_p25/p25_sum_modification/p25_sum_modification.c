//Get a 3 digit number from user. if the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. if the sum of the digits is more than 10 again add the sum digits.
//p25
    #include<stdio.h>

    int main(){
        
        int x,sum_1,sum_2,sum_final,one,one_1,one_2,ten,ten_1,ten_2,hrd,result;
        printf("Enter 3 digit number");
        scanf("%d",&x);
        one = x%10;
        ten = (x/10)%10;
        hrd = x/100;

        printf("one=%d\n",one);
        printf("ten=%d\n",ten);
        printf("hrd=%d\n",hrd);

        sum_1 = hrd+ten+one;

        printf("sum_1=%d\n",sum_1);

        one_1 = sum_1%10;
        ten_1 = sum_1/10;

        sum_2 = one_1 + ten_1;
        printf("sum_2 = %d\n",sum_2);

        one_2 = sum_2%10;
        ten_2 = sum_2/10;
        sum_final = one_2 + ten_2;
        printf("Final Sum = %d\n",sum_final);

        return 0;
    }
    