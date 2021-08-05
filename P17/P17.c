/******************************************************************************

Title    : Factorial of a number
Author   : Deepak M S 
Date     : 10/08/2021
Aim      : To write a program to print the factorial of the given number using recursive function.

*******************************************************************************/

#include <stdio.h>

//function for factorial
int factorial(int n);

int main(){
    int num,fact;
    //Read the number
    printf("Enter the number you want to find the factorial:");
    scanf("%d",&num);

    //find the factorial
    fact = factorial(num);

    //print the factorial
    printf("\n Factorial of given Number is :%d",fact);
    return 0;
}

int factorial(int n){
     //if the number is 1 return 
     if(n == 1){
         return 1;
     }
    //other wise return n*factorial(n-1)
    return n*factorial(n-1);
}