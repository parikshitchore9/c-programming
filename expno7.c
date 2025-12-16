#include<stdio.h>

int main(){
    int matrix[2][2];
    int i,j;

     //input values
     printf("Enter elements of 2*2 matrix:\n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&matrix[i][j]);
        }
     }
     //display values
     printf("\nThe 2*2 matrix is :\n");
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",matrix[i][j]);
        }
     }
     return 0;
}