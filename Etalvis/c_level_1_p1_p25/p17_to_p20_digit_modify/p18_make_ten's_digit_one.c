//Get a 2 digit number from the user, make the ten's digit 1,then print it.
//p18

 #include <stdio.h> 
    int main() {
    int result,one,ten,x;
    printf("Enter 2 digit number:");
    scanf("%d",&x);
    
    one = x %10;
    result = one+10;

    printf("result=%d\n",result);
    return 0;
    }
