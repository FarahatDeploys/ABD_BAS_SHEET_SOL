#include <stdio.h>
#include <stdlib.h>

// we are willing to sum all numbers up to certain number
int main(){
    printf("Please Enter 2 numbers to carry operation ! ....\n");
    int num1 =0;
    int num2 =0;
    scanf("%d%d",&num1,&num2);
    printf("Running ............\n");
    // swap numbers to make sure they are in asscending order
    // Tracing table of the following operation ! 
    // x  10    15    5    
    // y   5    10    10
    int sum =0;
    if(num1>num2){
        num1=num1+num2;
        num2 = num1-num2;
        num1 = num1-num2;
    }
    while (num1<num2)
    {
        sum = num1+num2+sum;
        num1++;
        num2--;
    }
    printf("The result of the operation is %d ",sum);
    return 0;

}
