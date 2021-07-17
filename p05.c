/******************************************************************************

    Title : Sum of digits of a number 
    Done by : Deepak M S 
    Aim: to To write a program to find the sum of digits of a given number.
    Date: 06/07/2021

*******************************************************************************/
#include <stdio.h>

int main()
{
    //variable declaration and intialization
    int num, reminder,sum=0;
    
    //get the number from the user
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    //calculate the sum
    while(num>0){
        reminder = num % 10;
        
        sum = sum + reminder;
        
        num /= 10; //num = num / 10;
    }
    
    //print sum 
    printf("Sum of given number is %d",sum);

    return 0;
}

