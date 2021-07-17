/* 
    Title : Electricity  Bill  preparation. 
    Done by : Deepak M S 
    Aim: Generate Electricity Bill  
    Date: 25/05/2021
*/ 

#include<stdio.h>
#include<string.h>

int main(){
    //declaration of variables
    int unit,amount;
    
    //get unit of current used 
    printf("Enter unit of current consumed :");
    scanf("%d",&unit);
    
    //check and calculate amount
    if(unit<=100){
        amount = unit * 1;
        
    }else if(unit>100 && unit <=300){
        amount =  100 + ((unit - 100)*2);
    }else{
        amount = 100+400 +( (unit-300) * 3);
    }
    
    // print Bill
    printf("your Electricity Bill for %d units  is %d",unit,amount);
    
    return 0;
    
}




