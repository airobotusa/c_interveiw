#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    float arr[100];
    char input_string[100];
    char buffer[30]="Fresh2refresh 5 ";
    char name [20];
    int age;

    for (i = 0; i < 1; i++)
    {
        printf("Enter string to print reverse order: ");
        sscanf (buffer,"%s %d",name,&age);


    //    sscanf("%s", input_string);
    //    printf("Input_string is %s\n", input_string);
       printf ("Name : %s \n Age : %d \n",name,age);
        printf("\n");

    }
return 0;

    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    printf("Enter total number of elements(1 to 100) to get max value: ");
    scanf("%d", &n);
    printf("\n");

    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);

    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    return 0;
}