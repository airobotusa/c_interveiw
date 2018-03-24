// This is reverse string "Have a good day"
// and return the pointer of that

#include <stdio.h>
#include <string.h>
#include <malloc.h>

// Function to reverse string and return reverse string pointer of that
char* ReverseString(char *str)
{
    int start, end, len_1;
    char temp, *ptr = NULL;  //ptr initialize to NULL

    // find length of string
    len_1 = strlen(str);

    // create dynamic pointer char array
    ptr = malloc(sizeof(char)*(len_1 + 1));

    // copy of string to ptr array
    ptr = strcpy(ptr,str);

    // swapping of the characters
    for (start=0,end=len_1 -1; start<=end; start++,end--)
    {
        temp = ptr[start];
        ptr[start] = ptr[end];
        ptr[end] = temp;
    }

    // return pointer of reversed string
    return ptr;
}

// Main function here
int main(void)
{
    const char const *str = "Have a good day";
    printf("%s", ReverseString(str));
    return 0;
}