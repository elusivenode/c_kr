#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool append(char* s, char c, int sc) {
    int len = strlen(s);
    bool is_space;

    if (c != ' ') {
        s[len] = c;
        s[len + 1] = '\0';
        is_space = false;
    }
    else if (sc == 0) {
        s[len] = c;
        s[len + 1] = '\0';
        is_space = true;
    }
    else {
        is_space = true;
    }
    return is_space;
}

int main() {

    char my_str[256] = "";
    char c;
    bool last_char_space;
    int space_count = 0;

    while ((c = getchar()) != EOF) {
        last_char_space = append(my_str, c, space_count);
        if (last_char_space) {
            space_count++;
        }
        else {
            space_count = 0;
        }

    }
    printf("%s\n", my_str);
}