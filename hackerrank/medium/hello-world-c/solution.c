#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    
    // Reads a full line of text from standard input (including spaces)
    scanf("%[^\n]%*c", s);
      
    // Prints "Hello, World!" on the first line
    printf("Hello, World!\n");
    
    // Prints the input string variable 's' on the second line
    printf("%s\n", s);
    
    return 0;
}
