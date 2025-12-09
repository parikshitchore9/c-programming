#include<stdio.h>

int main(){
    printf("Enter a number:");
    scanf("%d",&number);

    //if-else-if ladder
    if(num>0){
        printf("The number is positive.\n");
    }
    else if(num<0){
        printf("The number is Negative.\n");
    }
    else{
        printf("the number is Zero.\n");
    }
    return 0;
}