#include <stdio.h>
#include <string.h>

int main(void)
{
    char line[128];
    char delim[] = {"\n\""};//parse using only newline and double quote
    char *tok;

    char letter;
    char old_name[64];  // Space for 63 characters plus string terminator
    char new_name[64];

    fgets(line, 128, stdin);
    tok = strtok(line, delim);     //consume 1st " and get token 1
    if(tok) letter = tok[0];       //assign letter
    tok = strtok(NULL, delim);     //consume 2nd " and get token 2
    if(tok) strcpy(old_name, tok); //copy tok to old name
    tok = strtok(NULL, delim);     //consume 3rd " throw away token 3
    tok = strtok(NULL, delim);     //consume 4th " and get token 4
    if(tok) strcpy(new_name, tok); //copy tok to new name

    printf("%c %s %s\n", letter, old_name, new_name);


    return 0;
}