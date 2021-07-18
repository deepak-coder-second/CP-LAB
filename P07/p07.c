/******************************************************************************
    Title: SineAndCosineSeries
    Done by : Deepak M S 
    Date: 13/07/2021
    Aim: To write a program to print the sine and cosine series.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    //variable declaration and intilization
     int i,n;
     int fact=1,sign=-1;
     float x,angle,sSum;
     float cSum=1,t=1;
    
    //get the angle 
    printf(" Enter the value for angle in degree : ");
    scanf("%f",&x);
    //get the value of n
    printf(" Enter the value for n : ");
    scanf("%d",&n);
    
    //store the angle value to angle for printing purpose 
    angle = x;
    //convert x to radian
    x=x*3.14159/180;
    //store the value of x to sSum
    sSum = x;
    
    //calculation of cosine series and print
    
    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        cSum=cSum+t;
    }
     
    printf(" The value of Cos(%.1f) is : %f", angle, cSum);
    
    
    /*calculation of sine series and print
        
        formula : sum = x - x^3/3!+x^5/5!-x^7/7!+......+x^n/n!    
    
    */
    
    for(i=3;i<=n;i+=2){
        fact = fact * i*(i-1);
        sSum = sSum + sign * pow(x,i)/fact;
        sign = sign * -1;
    }
    
    printf(" \n The value of Sin(%.1f) is : %f", angle, sSum);
    
    
    return 0;
}



