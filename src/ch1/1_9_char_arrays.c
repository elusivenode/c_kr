#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = getln(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) {
        printf("%d was the line length\n"
               "%d was the longest line so far\n"
               "%s\bwas the latest line\n"
               "%s\bwas the longest line\n", len, max, line, longest);
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

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}