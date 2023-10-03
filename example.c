#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char** argv) {
	float num = 5.0;

    printf("%f\n", num / 2.0);
    printf("%f\n", num / 2.5);
    printf("%f\n", num / 3.0);
    printf("%f\n", num / 3.5);
    printf("%f\n", num * 2.0);
    printf("%f\n", num * 2.5);
    printf("%f\n", num * 3.0);
    printf("%f\n", num * 3.5);
    printf("%f\n", num - 2.0);
    printf("%f\n", num - 2.5);
    printf("%f\n", num - 3.0);
    printf("%f\n", num - 3.5);
    printf("%f\n", num + 2.0);
    printf("%f\n", num + 2.5);
    printf("%f\n", num + 3.0);
    printf("%f\n", num + 3.5);

    return EXIT_SUCCESS;
}
