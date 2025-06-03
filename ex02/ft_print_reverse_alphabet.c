#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    int alpha = 'z'; // again corresponds to keycode 122
    for (int i = 0; i < 26; i++) {
        printf("%c", alpha - i);
    }

    printf("\n");
}

int main(void) {
    ft_print_reverse_alphabet();
    printf("Completed opperation.");
    return 0;       // indicates 0 failurs. AKA failures false 
}

