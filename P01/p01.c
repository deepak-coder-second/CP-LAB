/*
    Title: Area of Rectangle and Triangle 
    Done by : Deepak M S 
    Date: 25/05/2021
    Aim: calculate and display areas of rectangle and triangle 
    
*/

#include<stdio.h>

int main(){
    //declaration of variables
    float base, height, width , length;
    
    //get length and width of rectangle
    printf("Enter the length and width of rectangle:");
    scanf("%f%f",&length,&width);
    
    //get length and width of triangle
    printf("Enter the length and width of triangle:");
    scanf("%f%f",&base,&height);
    
    //print area of rectangle
    printf("Area of %f length and %f width = %f \n",length,width,(length*width));
    
    //print area of triangleangle
    printf("Area of %f length and %f width = %f \n",base,height,(0.5*base*height));
    
    return 0;
}


