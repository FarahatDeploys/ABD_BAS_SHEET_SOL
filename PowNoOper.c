#include <stdio.h>
#include <stdlib.h>

// Target : Program to calculate the power ! of a number 
int main(){
    printf("Enter the base :        \n");
    int base = 0;
    scanf("%d",&base);
    printf("Enter the power :       \n");
    int power = 0;
    int result = 1;
    scanf("%d",&power);
    printf("Calculating ..............\n");
    if(base==-0){
        printf("The result is :         0\n");
    }
    if(power==0){
        printf("The result is :         1\n");
    }

    for (int i = 0; i < power; i++)
    {
        result =   result * base;
        
    }
    printf("The result is :           %d\n",result);
}
