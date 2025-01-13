//Get a 4 digit number from user and only reverse the last 2 digits of the number, then print the number
//p16

   #include<stdio.h>

   int main(){
   int x, one,ten,hrd,thd,result;

    printf("Enter 3 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = (x/10)%10;
    hrd = (x/100)%10;
    thd = x/1000;

    printf("one=%d\n",one);
    printf("ten=%d\n",ten);
    printf("hrd=%d\n",hrd);
    printf("thd=%d\n",thd);

    result = (hrd*1000)+(thd*100)+(ten*10)+one;
    
    printf("result = %d",result);

    return 0;
   }