/******************************************************************************

Title    : Mean , Variance and Standard Deviation
Author   : Deepak M S 
Date     : 27/07/2021
Aim      : To write a C program to calculate the mean, variance and standard deviation using functions

*******************************************************************************/

#include <stdio.h>
#include <math.h>
 
 
//function declaration
float mean(int array[50],int n);
float variance(int array[50],int size , float n);
float SD(float n);
 
//global variables;
int i;
//main function
int main(){
    //variable declaration
    int num[50];
    int size;
    float means,vC,sD;
    //Read the size of numbers
    printf("Enter the size of numbers:");
    scanf("%d",&size);
    //Read the Numbers
    printf("Enter the numbers:");
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    //get the means
    means = mean(num,size);
    printf("Means = %.3f",means);
    //get the variance
    vC = variance(num,size,means);
    printf("\nVariance = %.3f",vC);
    //get the standard deviation
    sD= SD(vC);
    printf("\n Standard Deviation = %.3f",sD);
}
 
//function for calculating mean
float mean(int array[50],int n){
    float sum =0;
    for(i=0;i<n;i++){
        sum += array[i];
    }
    //return the means
    return (sum/n);
}
//function for calculating variance
float variance(int array[50],int size , float n){
    float sum=0;
    for(i=0;i<size;i++){
        sum += pow((array[i]-n),2);
    }
 
    return (sum / (size-1));
}
 
//function for calculating Standard Deviation
float SD(float n){
 
    return (sqrt(n));
}
