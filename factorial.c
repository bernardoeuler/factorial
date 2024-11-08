#include <stdio.h>
#include <gmp.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Provide a value\n");
        return 1;
    } else if (argc > 2) {
        printf("Provide a single value\n");
        return 1;
    }

    mpz_t n;
    int valid_input;

    valid_input = mpz_init_set_str(n, argv[1], 10);

    if (valid_input != 0) {
        printf("Invalid number\n");
        return 1;
    }

    mpz_t factorial, i;

    mpz_init_set_ui(factorial, 1);

    for (mpz_init_set_ui(i, 1); mpz_cmp(i, n) <= 0; mpz_add_ui(i, i, 1)) {
        mpz_mul(factorial, factorial, i);
    }

    gmp_printf("%Zd\n", factorial);

    mpz_clears(n, factorial, NULL);
    
    return 0;
}
