// Get a 4 digit number from the user and check if the first 2 digit and last 2 digits are the same. if yes, print "success"; otherwise, print "failure"
//p14

#include<stdio.h>

int main(){
    int x,one_ten,hrd_tho;

    printf("Enter 4 digit number");
    scanf("%d",&x);

    one_ten = x%100;
    hrd_tho = x/100;

    printf("one_ten=%d\n",one_ten);
    printf("hrd_tho=%d\n",hrd_tho);

    if(one_ten==hrd_tho)
    printf("success");
    else
    printf("failure");
    
    return 0;

}