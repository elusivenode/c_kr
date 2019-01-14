#include <stdio.h>

#define MAXLINE 1000
#define SPACESTOTABS 1

int getln(char line[], int maxline);
void detab(char to[], char from[]);

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

void detab(char to[], char from[]) {
    int i, j, n;

    i = j = n = 0;
    while ((to[j] = from[i]) != '\0') {
        if (to[j] == '\t')
            for (n = 0; n < SPACESTOTABS; ++n, ++j)
                to[j] = ' ';
        else
            ++j;
        ++i;
    }
}

int main() {
    int len;
    char original[MAXLINE], detabbed[MAXLINE];

    while ((len = getln(original, MAXLINE)) > 0) {
        detab(detabbed, original);
        printf("ORIGINAL LINE: %s\n", original);
        printf("DETABBED LINE: %s\n", detabbed);
    }
    return 0;
}
