#include <stdio.h>
#include <string.h>

void append(char* s, char c) {
    int len = strlen(s);

    if (c == '\t') {
        s[len] = ' ';
        s[len + 1] = '\\';
        s[len + 2] = 't';
        s[len + 3] = '\0';
    }
    else if (c == '\b') {
        s[len] = ' ';
        s[len + 1] = '\\';
        s[len + 2] = 'b';
        s[len + 3] = '\0';
    }
    else if (c == '\\') {
        s[len] = ' ';
        s[len + 1] = '\\';
        s[len + 2] = '\\';
        s[len + 3] = '\0';
    }
    else {
        s[len] = c;
        s[len + 1] = '\0';
    }
}

int main() {

    char my_str[256] = "";
    char c;

    while ((c = getchar()) != EOF) {
        append(my_str, c);
    }
    printf("%s\n", my_str);
}
