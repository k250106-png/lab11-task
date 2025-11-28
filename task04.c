#include <stdio.h>
#include <string.h>

void reverseRec(char w[], int start, int end) {
    if (start >= end) return;
    char temp = w[start];
    w[start] = w[end];
    w[end] = temp;
    reverseRec(w, start + 1, end - 1);
}

int isPalindrome(char w[], int start, int end) {
    if (start >= end) return 1;
    if (w[start] != w[end]) return 0;
    return isPalindrome(w, start + 1, end - 1);
}

int main() {
    char word[50];
    char copy[50];

    printf("Enter a word: ");
    scanf("%s", word);

    strcpy(copy, word);

    reverseRec(copy, 0, strlen(copy) - 1);
    printf("Reversed: %s\n", copy);

    if (isPalindrome(word, 0, strlen(word) - 1))
        printf("It is a palindrome.\n");
    else
        printf("It is NOT a palindrome.\n");
}
