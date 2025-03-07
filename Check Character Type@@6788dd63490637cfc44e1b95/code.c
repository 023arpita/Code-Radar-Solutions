#include <stdio.h>
#include <ctype.h>

void checkCharacter(char ch) {
    if (isalpha(ch)) { 
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf(" Vowel\n", ch);
        } else {
            printf(" Consonant\n", ch);
        }
    } else if (isdigit(ch)) { 
        
        printf(" Digit\n", ch);
    } else { 
        
        printf("Special Character\n", ch);
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    checkCharacter(ch);

    return 0;
}
