// 1. Referencing pointer to another address to access the memory
//   Consider an example to access structure's member through pointer.
#include <stdio.h>
typedef struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;            // Referencing pointer to memory address of person1

    printf("Enter integer for age: ");
    scanf("%d",&(*personPtr).age);

    printf("Enter number for weight: ");
    scanf("%f",&(*personPtr).weight);

    printf("Displaying: ");
    printf("(*personPtr).age = %d, (*personPtr).weight = %.2f\n",(*personPtr).age,(*personPtr).weight);
    printf("personPtr->age = %d, personPtr->weight = %.2f\n",personPtr->age,personPtr->weight);

    return 0;
}