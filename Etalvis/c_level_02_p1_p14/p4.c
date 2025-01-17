//Get a number from the user and check if the number is greather than 50. if yes print 1, otherwise print 0
//p4

#include<stdio.h>

int main(){
    int x, result;

    printf("Enter any number");
    scanf("%d",&x);

    result = x>50;  //p4

    printf("result=%d\n",result);

    return 0;

}