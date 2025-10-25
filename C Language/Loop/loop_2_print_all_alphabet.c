#include <stdio.h>

int main(){
    char ch;
    printf("The Uppercase are:\n");
    ch= 'A';
    while ( ch<='Z')
    {    
    printf("%c ", ch);
    ch++;
    }
    printf("\nThe Lowercase are:\n");
    ch= 'a';
    while (ch<='z')
    {
        printf("%c ", ch);
        ch++;
    }
    return 0;
}