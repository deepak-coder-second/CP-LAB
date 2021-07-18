/******************************************************************************

    Title: Matrix Addition and Multiplication
    Done by : Deepak M S 
    Date: 20/07/2021
    Aim: To write a program to perform Matrix addition and matrix multiplication

*******************************************************************************/

#include<stdio.h>

int main(){
    //variable declaration
   
    int firstMx[50][50],secondMx[50][50],resMx[50][50];
    int sum =0;
    int i,j,k,mxSize,rowM1,rowM2,colM1,colM2;
    
    //get the row and column size of the matrices
    printf("Enter the row or column size of first matrix matrix:");
    scanf("%d%d",&rowM1,&colM1);
    printf("Enter the row or column size of second matrix matrix:");
    scanf("%d%d",&rowM2,&colM2);
    
    //addition
    if(rowM1 == rowM2 && colM1 == colM2){
        //get the elements of first matrix
        printf("Enter the elements of first matrix:");
        for(i=0;i<rowM1;i++){
            for(j=0;j<colM1;j++){
                scanf("%d",&firstMx[i][j]);
            }
        }
        
        //get the elements of second matrix
        printf("Enter the elements of second matrix:");
        for(i=0;i<rowM2;i++){
            for(j=0;j<colM2;j++){
                scanf("%d",&secondMx[i][j]);
            }
        }
        
        // Print the first matrix
        printf("elements of first matrix are:\n");
        for(i=0;i<rowM1;i++){
            for(j=0;j<colM2;j++){
                printf("\t%d",firstMx[i][j]);
            }
            printf("\n");
        }
        
        // Print the second  matrix
        printf("elements of second matrix are:\n");
        for(i=0;i<rowM2;i++){
            for(j=0;j<colM2;j++){
                printf("\t%d",firstMx[i][j]);
            }
            printf("\n");
        }
        
        //print the added matrix
       printf("elements of after adding the matrices are:\n");
        for(i=0;i<rowM1;i++){
            for(j=0;j<colM1;j++){
                printf("\t%d",(firstMx[i][j] + secondMx[i][j]));
            }
            printf("\n");
        }


        
    }else{
        printf (" addition not possible!!!!!!");
    }
    
    //multiplication
    if(colM1 == rowM2){
        
        for(i=0;i<rowM1;i++){
            for(j=0;j<colM2;j++){
                
                for(k=0;k<colM1;k++){
                    sum += firstMx[i][k] * secondMx[k][j];
                }
                 //store the sum as the corresponding elements of matrix
                resMx[i][j] = sum;
                sum =0;
                
            }
        }
        
        //print resultant matrix
        printf("\n resultant matrix(matrix after multiplication) : \n");
        for(i=0;i<rowM1;i++){
            for(j=0;j<colM2;j++){
                printf("\t%d",resMx[i][j]);
            }
            
            printf("\n");
            
        }
        
    }else{
         printf (" multiplication not possible!!!!!!");
    }
    
    
    return 0;
}
