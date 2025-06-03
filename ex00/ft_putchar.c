#include <stdio.h>  // standard input-output
#include <unistd.h> // unix standard

void ft_putchar(char characther) {
    printf("\n");
    write(1, &characther, 1);    // I write the index of the characther seen as array from 1 to 1
}

int main(void) {

    // define char 
    char a = 'A';
    // call func
    ft_putchar(a);
}
