#include <stdio.h>

int main() {
	
	float fahr, celsius;
	int lower, upper, step;

	printf("**********Fahrenheit to Celsius************\n\n");

	lower = 0;
	upper = 300;
	step = 10;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
