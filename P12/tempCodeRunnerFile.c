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