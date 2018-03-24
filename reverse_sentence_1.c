/* Example to reverse a sentence entered by user without using strings. */
#include <stdio.h>
void reverseSentence();

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    //printf("1 Right after scanf:%c\n",c);
    if( c != '\n') {
        //printf("2 In if statement, calling reverseSentence()\n");
        reverseSentence();
      //  printf("3 ** if() calling reversSentence()\n");
        printf("=%c",c);
    }
}
/*
This program first prints "Enter a sentence: ". Then, immediately reverseSentence() function is called.
This function stores the first letter entered by user in variable c.
If the variable is any character other than '\n' [ enter character], reverseSentence() function is called again.

When reverseSentence() is called the second time, the second letter entered by the user is stored in c again.

But, the variable c in the second function isn't the same as the first. They both take different space in the memory.

This process goes on until user enters '\n'.

When, the user finally enters '\n', the last function reverseSentence() function prints the last character
because of printf("%c", c); and returns to the second last reverseSentence() function.

Again, the second last reverseSentence() function prints the second last character and returns to the third last reverseSentence() function.

This process goes on and the final output will be the reversed sentence.
*/