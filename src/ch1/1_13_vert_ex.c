#include <stdio.h>

#define IN 0
#define  OUT 0

int main() {
    int i, c, nletters, state;
    int wordlen[20];

    state = OUT;
    nletters = 0;
    for (i = 0; i < 20; ++i) {
        wordlen[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            ++wordlen[nletters];
            nletters = 0;
        }
        else {
            state = IN;
            ++nletters;
        }
    }
    printf("*********************Histogram with vertical alignment**************************\n\n");
    for (i = 0; i < 20; ++i) {
        printf("%6d\t", i);
    }
    printf("\n");

    for (i = 0; i < 20; ++i) {
        printf("%6d\t", wordlen[i]);
    }
    printf("\n");
}
