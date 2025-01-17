 //Get a 3 digit number from the user and subtract 5 from that number if one's and 100's digit number are odd.then print the result. do not use "if"
 //p24
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

    result = ((one%2!=0) && (hrd%2!=0)) ? x-5 : x ;
   
    printf("result = %d",result);


    return 0;
   }