#include <stdio.h>
#include <stdlib.h>

// Target : Multiply 2 numbers withot using * operator 
int main(){
    printf("Enter 2 numbers to multiply \n");
    int num1;
    int num2;
    scanf("%d%d",&num1,&num2);
    // to minmize the number of loops we check which is the smalles number !
    unsigned int itera = 0;
    unsigned int base = 0;
    unsigned int res = 0;
    if(num1>num2){
        itera = num1;
        base  = num2;

    }else{
        itera = num2;
        base  = num1;
    }

    for (int  i = 0; i < itera; i++)
    {
        res = base+res;
    }
    printf("Multiplication Result %d",res);

    return 0;

}
