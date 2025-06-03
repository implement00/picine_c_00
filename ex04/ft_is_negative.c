#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int number) {

    /*
    This exersize it's purpose is clearly learning if else statemetns in C
    If anything above >= 0; display P ( postive )
    If anything above < 0; display N ( negative )
    */

    char Possitive[] = "possitive"; // 9 items
    char Negative[] = "negative";   // 8 items

    // Let's be fancy, find the last item in the array and the first | Used in the write func as items to print as string is not existent
    /*
    How does the 'sizeof array' actually work?
    It's quite intresting, I calculate both the size of entire array in bytes
    and I calculate the size of a single item in bytes. 

    Then I can device the total size by a single item size, yeye makes sence ^_^
    Finally I pass -2 to get the true index of the final array item.
    */

    printf("Size of entire Possitve Array | Bytes : %d \n", sizeof(Possitive));
    printf("Size of items Possitve Array | Bytes : %d \n", sizeof(Possitive[0]));    // I do 0 to ensure the next item is not out of bounds.
    printf("\n");
    printf("Size of entire Negative Array | Bytes : %d \n", sizeof(Negative));
    printf("Size of items Negative Array | Bytes : %d \n", sizeof(Negative[0]));    // I do 0 to ensure the next item is not out of bounds.


    int firstItemPosition = 0;  // first item will always be static
    
    int lastItemPositionPossitve = sizeof(Possitive)/sizeof(Possitive[0]) -2;   // I pass -2 to get items correctly indexed
    printf("Size (array -2) found: %d \n", lastItemPositionPossitve);
    printf("Last item in array: %c \n", Possitive[lastItemPositionPossitve]);  // utilise %c placeholder because character
    printf("\n");
    
    int lastItemPossitionNegative = sizeof(Negative)/sizeof(Negative[0]) -2;    
    printf("Size (array -2) found: %d \n", lastItemPossitionNegative);
    printf("Last item in array: %c \n", Negative[lastItemPossitionNegative]);  
    printf("\n");

    /*
    I need to once more pass +1 to lastItemPositionPossitve within write func
    because write seems to take in values BETWEEN item array possitions.
    */ 

    if (number >= 0) {
        write(firstItemPosition, &Possitive, (lastItemPositionPossitve +1));      
    } else {
        write(firstItemPosition, &Negative, (lastItemPossitionNegative +1));
    }
}

int main(void) {
    int number = 0;
    ft_is_negative(number);
}