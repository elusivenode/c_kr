#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
int lastwantedchar(char line[], int len);
void copyandtruncate(char to[], char from[], int lastwanted);

int main() {
    int len = 0;
    char line[MAXLINE], truncated[MAXLINE];

    while ((len = getln(line, MAXLINE)) > 0) {
        printf("LENGTH: %d\n", len);
        printf("LINE CONTENTS: %s", line);
        printf("Index of last none space: %d\n", lastwantedchar(line, len));
        copyandtruncate(truncated, line, len);
        printf("Truncated trailing tabs and spaces: %s", truncated);
    }
    return 0;
}

void copyandtruncate(char to[], char from[], int len) {
    int i;

    i = 0;
    while (i <= len){
        to[i] = from[i];
        ++i;
    }
    to[i] = '\0';
}

int lastwantedchar(char line[], int len) {
    int i = len - 2;
    for (i; i >=0; --i) {
        if (line[i] != ' ' && line[i] != '\t') {
            break;
        }
    }
    return i;
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