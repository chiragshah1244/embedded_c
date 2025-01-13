// Get a number from the user and check if the number equals 50. if yes print 1, otherwise print 0
// Get a number from the user and check if the number is not equal to 50. if yes print 1, otherwise print 0
// Get a number from the user and check if the number is less than 50. if yes print 1, otherwise print 0
// Get a number from the user and check if the number is greather than 50. if yes print 1, otherwise print 0
// Get a number from the user and check if the number is less than or equal to 50. if yes print 1, otherwise print 0
// Get a number from the user and check if the number is greater than or equal to 50. if yes print 1, otherwise print 0

#include<stdio.h>

int main(){
    int x, result;

    printf("Enter any number");
    scanf("%d",&x);

    //result = x==50; //p1
    //result = x!=50; //p2
    //result = x<50;  //p3
    //result = x>50;  //p4
    //result = x<=50; //p5
    result = x>=50;   //p6



    printf("result=%d\n",result);

    return 0;

}