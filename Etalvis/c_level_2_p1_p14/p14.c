// Get a 4 digit number from the user and check if the first 2 digit and last 2 digits are the same. if yes, print 1; otherwise, print 0

#include<stdio.h>

int main(){
    int x,one_ten,hrd_tho,result;

    printf("Enter 4 digit number");
    scanf("%d",&x);

    one_ten = x%100;
    hrd_tho = x/100;

    printf("one_ten=%d\n",one_ten);
    printf("hrd_tho=%d\n",hrd_tho);

    result = one_ten==hrd_tho;
    
    printf("result=%d\n",result);

    return 0;

}