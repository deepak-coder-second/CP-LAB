/******************************************************************************

Title    : String Functions
Author   : Deepak M S 
Date     : 27/07/2021
Aim      : To write a program to perform string manipulation functions like 
           string concatenations, comparison, find the length and string copy
            without using library functions.

*******************************************************************************/

#include <stdio.h>

//function for finding the length of string
int length(char s[]);
int compare(char s1[],char s2[]);
void copy(char s1[],char s2[]);
void concatinate(char s1[],char s2[]);

//global variables 
int i;

int main(){
    //strings
    char string1[20],string2[20];
    int choice,option;

    do
    {
        printf("Enter the fuction you want to perform:\n\t1 for find the length of string\n\t2 for compare two string\n\t3 for concatinate strings\n\t4 for coping");
        printf("\nEnter the choice here:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            //length of string
            printf("Enter the first string:");
            scanf("%s",&string1);
            printf("Enter the second string:");
            scanf("%s",&string2);
            printf("Lenght of first string = %d\n",length(string1));
            printf("Lenght of second string = %d\n",length(string2));
            break;
        case 2:
            //compare two string
            printf("Enter the first string:");
            scanf("%s",&string1);
            printf("Enter the second string:");
            scanf("%s",&string2);
            printf("Comparision of two strings: ");
            if(compare(string1,string2)==0){
                printf("They are equal strings.");
            }else{
                printf("They are not equal.");
            }
            break;
        case 3:
            //concatinate two strings 
            printf("Enter the first string:");
            scanf("%s",&string1);
            printf("Enter the second string:");
            scanf("%s",&string2);
            printf("\nAfter concatinating both strings:");
            concatinate(string1,string2);
            break;
        case 4:
            //copy string 1 to string2
            printf("Enter the first string:");
            scanf("%s",&string1);
            printf("Enter the second string:");
            scanf("%s",&string2);
            copy(string2,string1);
            break;
        
        default:
            printf("Invalid entry");
            break;
        }


    
        printf("\nDo you want to continue? if yes enter 1 :");
        scanf("%d",&option);
    } while (option ==1);
    
    return 0;
}


int length(char s[]){
    int length=0;
    
    for(i=0;s[i]!='\0';i++){
        length++;
    }

    return length;
}


int compare(char s1[],char s2[]){
    int len1,len2;
    int count =0;

    len1=length(s1);
    len2=length(s2);

    if(len1 != len2){
        return 1;
    }
    for(i=0;i<len1;i++){
        if(s1[i]==s2[i]){
            count++;
        }
    }

    if(count==len1){
        return 0;
    }

    return 1;
}

void copy(char s2[],char s1[]){

    int len;
    len = length(s1);

    for(i=0;i<len;i++){
        s2[i]=s1[i];
    }

    s2[i]='\0';

    printf("\nAfter coping string 1 to string 2: \n\tstring 1 = string 2 =%s",s2);

}

void concatinate(char s1[],char s2[]){
    int len1,len2;
    len1=length(s1);
    len2=length(s2);

    for(i=len1;i<len1+len2;i++){
        s1[i]=s2[i-len1];
    }
    s1[i]='\0';

    printf("\n\t string = %s",s1);
}