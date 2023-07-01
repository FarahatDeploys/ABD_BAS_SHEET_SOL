#include <stdio.h>
#include <stdlib.h>

// Target : Calculate the remindar without % 
int main(){
    printf("Enter 2 Numbers to carry the remaidar operation : \n");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int div =0;
    int remaind =0;
    div = num1/num2;
    remaind = num1 - div*num2;
    printf("Remaindar : %d",remaind);
    return 0;

}
