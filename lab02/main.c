#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Returns a null-terminated reversed version of the string
passed as an argument into a newly allocated array of
characters. The calling function is responsible for
free’ing the memory allocated by this function. */
char* strrev(char* s) {
    if (!s || !*s) {
        return NULL;
    }
    // Allocate and verify the result array
    char* reverse = calloc(strlen(s) + 1, sizeof(char));
    if (!reverse) {
        return NULL;
    }
    // Reverse the received string and return the result
    for (int i = 0, j = (strlen(s) - 1); i < strlen(s); i++, j--) {
        reverse[j] = s[i];
    }
    return reverse;
}

/* Returns 1 if the string passed as an argument is a
palindrome. Returns 0 if the argument is not a palindrome.
Returns -1 if passed a NULL argument. */
int isPalindrome(char* s) {
    if (!s) {
        return -1;
    }

    for (int i = 0, j = (strlen(s) - 1); i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char** argv)
{
    if (argc <= 1) {
        printf("Usage: pal str [str]*\n");
    }
    for (int i = 1; i < argc; i++) {
        if (isPalindrome(argv[i])) {
            printf("%s\n", argv[i]);
        } else {
            char* reverseInput = strrev(argv[i]);
            printf("%s%s\n", reverseInput, argv[i]);
            free(reverseInput);
        }
    }
    return 0;
}