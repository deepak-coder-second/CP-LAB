#include <stdio.h>
#include <string.h> //for string functions

int main(){
    //variable declaration
    char names[100][100],temp[100];
    int size,i,j;

    //read the number of names
    printf("Enter the number of Names:");
    scanf("%d",&size);

    //get the names
    printf("Enter the names one by one");
    for(i=0;i<size;i++){
        scanf("%s",names[i]);
    }

    //print names
    printf("\n Entered Names are :");
    for(i=0;i<size;i++){
        printf("\t%s",names[i]);
    }


    //sort the names
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    //print the sorted names
    printf("\n Names after sorted :");
    for(i=0;i<size;i++){
        printf("\t%s",names[i]);
    }

    return 0;
}

