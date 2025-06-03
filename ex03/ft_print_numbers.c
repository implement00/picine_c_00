#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void) {

    // This function utilises native int's no keycodes
    for (int i = 0; i <= 9; i++) {
        printf("%d", i);    // use %d placeholder for decimal. Should docs most common placeholder tbh.
    }

}


int main(void) {
    ft_print_numbers();
    return 0;
}