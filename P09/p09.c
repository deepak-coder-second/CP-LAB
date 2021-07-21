/******************************************************************************

    Title: Sum and Avarage of an array
    Done by : Deepak M S 
    Date: 13/07/2021
    Aim: To write a program to find the sum and average of elements in an array

*******************************************************************************/
#include <stdio.h>

int main()
{
   //variable declaration and initialization
   int array[50];
   int i,size;
   float sum=0 , avg=0;
   
   //get the size of array from the user
   printf("Enter the size of the array:");
   scanf("%d",&size);
   
   //get the elements
   printf("Enter the elements of array");
   for(i=0;i<size;i++){
       scanf("%d",&array[i]);
   }
   
   //print the array elements
   printf("Elements in array:");
   for(i=0;i<size;i++){
       printf("\t%d",array[i]);
   }
   
   //find the sum
   for(i=0;i<size;i++){
      sum += array[i];
   }
   //print sum
   printf("\nSum of Elements in array is : %.2f",sum);
   
   //find average
   avg = sum/size;
   
   //print average
   printf("\nAverage of Elements in array is : %.2f",avg);

    return 0;
}

