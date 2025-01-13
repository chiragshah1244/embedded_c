//Get a number from the user and check if the number equals 50. if yes, the print "success",otherwise print "failure"
//Get a number from the user and check if the number not equal to 50. if yes, the print "success",otherwise print "failure"
//Get a number from the user and check if the number less than 50. if yes, the print "success",otherwise print "failure"
//Get a number from the user and check if the number greater than 50. if yes, the print "success",otherwise print "failure"
//Get a number from the user and check if the number less than or equal to 50. if yes, the print "success",otherwise print "failure"
//Get a number from the user and check if the number greater than or equal to 50. if yes, the print "success",otherwise print "failure"

#include<stdio.h>

int main(){
    int x,result;
    printf("Enter any number");
    scanf("%d",&x);

    //if(x==50) //p1
    //if(x!=50) //p2
    //if(x<50)  //p3
    //if(x>50)  //p4
    //if(x<=50) //p5
    if(x>=50) //p6
    printf("success\n");
    else
    printf("Failure\n");
    return 0;
}