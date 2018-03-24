// Print an Entered String Backwards
#include <stdio.h>
#include <string.h>

int main()
{
    int j,i;
    char str[100];
    printf("Enter String\n");
    gets(str);
    printf("\nString in Reverse Order\n");
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            for(j=i-1;j>=0;j--)         //Loop starts from last char and decrements upto 0th char
                printf("%c",str[j]);
            printf(" ");
        }
        i++;
    }
}