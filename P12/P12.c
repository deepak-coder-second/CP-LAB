/******************************************************************************

Title    : String Functions
Author   : Deepak M S 
Date     : 27/07/2021
Aim      : To write a program to perform string manipulation functions like 
           string concatenations, comparison, find the length and string copy
            without using library functions.

*******************************************************************************/

#include <stdio.h>


int main(){
    //strings
    char string1[20],string2[20],con_string[20];
    int choice,option,len1,len2,i,count;


            //length of string
            printf("Enter the first string:");
            scanf("%s",&string1);
            printf("Enter the second string:");
            scanf("%s",&string2);
            len1=0;
            for(i=0;string1[i]!='\0';i++){
                len1++;
            }

            printf("Length of first string = %d\n",len1);
            len2=0;
            for(i=0;string2[i]!='\0';i++){
                len2++;
            }

            printf("Length of second string = %d\n",len2);
            
            
            printf("Comparision of two strings: ");

            if(len1!=len2){
                printf("Strings are not equal");
            }else{
                for(i=0;i<len1;i++){
                    if(string1[i]==string2[i]){
                        count++;
                    }
                }
                if(count == len1){
                    printf("Strings are equal");
                }else{
                    printf("Strings are not equal");
                }
            }
            
            
            //concatinate two strings 

            for(i=0;i<len1;i++){
                con_string[i]=string1[i];
            }
            
            for(i=len1;i<len1+len2;i++){
                con_string[i]=string2[i-len1];
            }
            con_string[i]='\0';
            printf("\nConcatinate string = %s",con_string);
            
            //copy string 1 to string2
            for(i=0;i<len1;i++){
                string2[i]=string1[i];
            }
            string2[i]='\0';
           printf("\nAfter coping string 1 to string 2: \n\tstring 2 =%s",string2);
            
    
    return 0;
}


