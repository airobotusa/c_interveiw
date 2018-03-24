#include<stdio.h>

void stringConcat(char[],char[]);
int main(){

    char str1[100],str2[100];
    int compare;

    printf("Enter first string: ");
    scanf("%s",str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    stringConcat(str1,str2);

    printf("String after concatenation: %s",str1);

    return 0;
}

void stringConcat(char str1[],char str2[]){
    int i=0,j=0;


    while(str1[i]!='\0'){
         i++;
    }

    while(str2[j]!='\0'){
         str1[i] = str2[j];
         i++;
         j++;
    }

    str1[i] = '\0';
}