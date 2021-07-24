#include <stdio.h>
#include <math.h>


//function declartion
int mean(int array[50],int n);
int varience(int array[50],int size , float n);
int SD(float n);

//global variables;
int i;
//main function
int main(){
    //varaible declartion
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
    printf("Means = %f",means);
    //get the varience
    vC = varience(num,size,means);
    printf("\nVarience = %f",vC);
    //get the standard deviation
    sD= SD(vC);
    printf("\n Standard Deviation = %f",sD);
}

//function for calculating mean
int mean(int array[50],int n){
    float sum =0;
    for(i=0;i<n;i++){
        sum += array[i];
    }
    //return the means
    return (sum/n);
}
//function for calculating varience
int varience(int array[50],int size , float n){
    float sum=0;
    for(i=0;i<size;i++){
        sum += pow((array[i]-n),2);
    }

    return (sum / (size-1));
}

//function for calculating Standard Deviation
int SD(float n){

    return (sqrt(n));
}