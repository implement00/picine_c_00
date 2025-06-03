#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void) {

    /*
    The best way to achieve this is using keycodes, native to C 
    https://media.geeksforgeeks.org/wp-content/uploads/20240304094301/ASCII-Table.png
    */ 

    int aplha = 'a'; // corresponds to keycode 97 aka int 97 | **Note:** variable needs to be type int for this to work.

    for (int i = 0; i < 26; i++) {
        printf("I currently represents:  %d \n", i);
        printf("Alphabet keycode currently represents: %c \n", (aplha + i));
    }

    printf("Complete alphabet: \n \n \n");
    for (int i = 0; i < 26; i++) {
        printf("%c", (aplha + i)); 
    }

}

int main(void) {

    // call func
    ft_print_alphabet(); 

}