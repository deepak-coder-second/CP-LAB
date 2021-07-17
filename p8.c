/******************************************************************************

Title    : Pascal's Triangle
Author   : Deepak M S 
Date     : 13/07/2021
Aim      : To write Program for printing Pascal's Triangle

*******************************************************************************/
#include <stdio.h>



int main()
{
    //variable declaration 
    int rowSize,i,j,x,a1,a2,a3,value;
    
    //get the Number of row
    printf("Enter the Number of rows");
    scanf("%d",&rowSize);
    
    //outer itereation loop for traversing through the rows
    for(i=0;i<rowSize;i++){
        //loop for printing space
        for(j=0;j<=(rowSize-i-2);j++){
            printf(" ");
        }
        //loop for calculating Pascal triangle value and print that
        for(j=0;j<=i;j++){
            //formula : C(n,k)--> nCk = n! / (k! * (n-k)!)
            a1=1;
            a2=1;
            a3=1;
            //calculate n!
            for(x=2;x<=i;x++){
                a1 *= x;
            }
            //calculate k!
            for(x=2;x<=j;x++){
                a2 *= x;
            }
            //calculate (n-k)!
            for(x=2;x<=i-j;x++){
                a3 *= x;
            }
            value = a1/(a2*a3);
            printf("%d ",value);
        }
        
        //go to new line after priniting each row
        
        printf("\n");
    }

    return 0;
}




