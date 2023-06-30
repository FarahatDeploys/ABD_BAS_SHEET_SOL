#include <stdio.h>
#include <stdlib.h>

// write a program to swap two numbers 
int main(){
    // tell the user to enter two numbers 
    printf("Please enter 2 numbers to swap them \n");
    unsigned int num1 = 0;
    unsigned int num2 = 0;
    unsigned int temp = 0 ;
    scanf("%d%d",&num1,&num2);
    printf("Numbers before swapping are \n");
    printf("Number 1  : %d  Number 2 : %d\n",num1,num2);
    printf("Swaping numbers started .... \n");
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Numbers after swapping are \n");
    printf("Number 1  : %d  Number 2 : %d\n",num1,num2);

}
