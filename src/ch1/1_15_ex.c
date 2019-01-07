#include <stdio.h>

#define LOWER 0.0
#define UPPER 400.0
#define STEP 10.0

float f_to_c(float f);

float f_to_c(float fahr) {
    float celc;

    celc = (5.0 / 9.0) * (fahr - 32);
    return celc;
}

int main() {
    float celcius = 0;
    float fahr = LOWER;

    while (fahr <= UPPER) {
        celcius = f_to_c(fahr);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + STEP;
    }

    return 0;
}


