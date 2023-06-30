#include <stdio.h>
#include <stdlib.h>

// Target : get min from a set of numbers 
int main(){
    printf("Enter the length of the array \n");
    unsigned int arrLen = 0;
    scanf("%d",&arrLen);
    printf("Start adding your numbers\n");
    int num =0;
    unsigned int  max = 0;
    unsigned int min =0;
    for (int  i = 0; i < arrLen; i++)
    {
        scanf("%d",&num);
        if(i==0){
            min = num;
            max = num;
        }
        if(num>max){
            max = num;
        }
        if(num<min){
            min = num;
        }
    }
    printf("Min Number in Array : %d\n",min);
    printf("Max Number in Array : %d\n",max);
    
    return 0;

}
