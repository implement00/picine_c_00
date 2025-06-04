#include <stdio.h>  // stand for: standard input output
#include <unistd.h> // stand for UNIX standard
#include <stdlib.h> // stand for standard library, kinda odd name tbh
# include <string.h>    // string just like the name implies 



// Functions need to be declared before usage
char* convertNumToCharArray(int number) {
    char* string = malloc(50 * sizeof(char));    // dynamically allocate mem
    sprintf(string, "%d", number);
    printf("Memory address utilised for 'string': %p \n", &string);
    printf("Converted number to following string num: %s \n", string);
    return string;
}


void ft_putnbr(int number) {

    // initialize variable to store converted result
    char* string;
    printf("Number passed as param %d: \n", number);
    string = convertNumToCharArray(number);
    printf("number being displayed by write() call: \n");

    /*
    Convert number to char array, as write function only allows single char and array of char
    https://www.delftstack.com/howto/c/how-to-convert-an-integer-to-a-string-in-c/
    */ 
    write(1, string, strlen(string)); //  strlen(string) used to extract how many single char in a string represented by int's, include space. Ignores starting at 0 index, starts at 1.
    printf("\n \n");
}



int main(void) {

    int sample = 1500;
    printf("Looping over possitive and negative numbers to display ALL numbers can be passed and displaye dusing write(); func. \n \n \n \n");
    // simple loop to display effectiveness
    for (int i = 0; i < 15; i++) {
        sample = sample / -1.5;
        ft_putnbr(sample);
    }

    return 0;
}