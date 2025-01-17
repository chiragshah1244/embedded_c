//Get a 3 digit number from the user and make the ten's digit as 0, then print it
//p20

   #include<stdio.h>

   int main(){
    int x, one,ten,hrd,result;

    printf("Enter 3 digit number");
    scanf("%d",&x);

    one = x%10;
    ten = (x/10)%10;
    hrd = x/100;

    printf("one=%d\n",one);
    printf("ten=%d\n",ten);
    printf("hrd=%d\n",hrd);

    result = (hrd*100)+one;
    printf("result = %d",result);


    return 0;
   }