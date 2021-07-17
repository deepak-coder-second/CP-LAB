/******************************************************************************

    Title: Menu Driven calculator
    Done by : Deepak M S 
    Date: 06/07/2021
    Aim: To write a simple menu driven calculator program using switch statements

*******************************************************************************/
#include <stdio.h>

int main ()
{
  //variable declaration and intialization
  float num1, num2;
  int choice, option;

  do
    {
        //geth the numbers from user
        printf("  Enter the numbers:");
        scanf("%f%f",&num1,&num2);
        //get the choice
        printf("  Select your operator : \n\t1 for Addition \n\t2 for substraction \n\t3 for Multiplication \n\t4 for division\n");
          scanf ("%d", &choice);
    
        switch (choice)
    	{
    	  case 1:
    	        printf("%f + %f = %f\n",num1,num2,(num1+num2));
    	        break;
    	  case 2:
    	        printf("%f - %f = %f\n",num1,num2,(num1-num2));
    	        break;
    	 case 3:
    	        printf("%f x %f = %f\n",num1,num2,(num1*num2));
    	        break;
    	 case 4:
    	        printf("%f / %f = %f\n",num1,num2,(num1/num2));
    	        break;
    	 default:
    	        printf("  Invalid choice\n");
    	        break;
    	}
    	
    	//repetation 
    	printf("  Do you want to continue? If yes enter 1 if No enter 0\n");
    	scanf("%d",&option);
    	 
    	  
    
    	
    	
    }while(option == 1);



  return 0;
  }


