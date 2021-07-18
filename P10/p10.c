/******************************************************************************

    Title: Bubble Sort
    Done by : Deepak M S 
    Date: 20/07/2021
    Aim: To write a program to sort the given numbers using bubble sort.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //variable declartion and initialization
    int array[50]; //for stroring the numbers
    int i,j,size,temp;
    
    //get the size
    printf("Enter the size of numbers:");
    scanf("%d",&size);
    
    //get the numbers
    printf("\nEnter the numbers:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    //print the numbers
    printf("\nNumbers are:");
    for(i=0;i<size;i++){
        printf("\t%d",array[i]);
    }
    
    //sort the numbers
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            //check the current number is greater than next number
            if(array[i]>array[j]){
                //swap the number
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                
            }
        }
    }
    //print the numbers
    printf("\nNumbers after sorting:");
    for(i=0;i<size;i++){
        printf("\t%d",array[i]);
    }
    

    return 0;
}

