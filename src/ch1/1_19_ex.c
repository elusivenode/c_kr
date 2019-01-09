#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void reverse(char to[], char from[], int len);

int main() {
    int len = 0;
    char line[MAXLINE], reversed[MAXLINE];

    while ((len = getln(line, MAXLINE)) > 0) {
        printf("LENGTH: %d\n", len);
        printf("LINE CONTENTS: %s", line);
        reverse(reversed, line, len);
        printf("REVERSED: %s\n", reversed);
    }
    return 0;
}

void reverse(char to[], char from[], int len) {
    int i = len - 2;
    int j = 0;

    while (i >= 0){
        to[j] = from[i];
        --i;
        ++j;
    }
    to[j] = '\0';
}

int getln(char s[], int lim) {
    int c,i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}