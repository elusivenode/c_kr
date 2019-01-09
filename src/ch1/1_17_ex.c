#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);

int main() {
    int len = 0;
    char line[MAXLINE];

    while ((len = getln(line, MAXLINE)) > 0) {
        if (len > 80) {
        printf("LENGTH: %d\n", len);
        printf("LINE CONTENTS: %s", line);
    }
   }
    return 0;
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