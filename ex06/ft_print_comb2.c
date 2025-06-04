#include <stdio.h>
#include <unistd.h>
#include <unistd.h> // Include for sleep function

void ft_print_comb2(void) {

    // initialize both a and b sets
    int a = 00;
    int b = 00;

    while(1)  {

        // this breaks out when I finish the at: A = 99
        if(a == 100) {
            break;
        }

        // incremnt b
        b = b + 1;

        // when B = 99: A + 1
        if (b == 100) {
            a = a + 1;
            b = a + 1;
        }

        // if A and B 99 I finished all combinations
        if (a == 99) {
            printf("\n \n");
            printf("Successfully finshed complete assignment.");
            break;
        }

        // if a and b are the same int I continue
        if (a == b) {
            continue;
        }

        //printf("Current Set: %02d, %02d \n", a, b);
        printf("[%02d,  %02d]", a, b);
        //sleep(01);
    }

}

int main(void) {
    ft_print_comb2();
}