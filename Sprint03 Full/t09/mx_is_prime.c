#include <stdbool.h>

bool mx_is_prime(int num) {
    if (num < 0) {
        num *= -1;
    }
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}
