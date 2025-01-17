//Write a program to get a number from user print the total number of digits in that number
//p10

#include<stdio.h>
int main(){

int x,total,count=0;
printf("Enter any number");
scanf("%d",&x);

if(x==0)
count = 1;
else if(x<10)
count = 1;
else if(x<100)
count = 2;
else if(x<1000)
count = 3;
else if(x<10000)
count = 4; 
else if(x<100000)
count = 5;
else if(x<1000000)
count = 6;
printf("count=%d\n",count);
}
