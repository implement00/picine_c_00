# Picine C 00 | Learning C Basics

_This documents covers what I have learned from doing these exersizes. This is for my personal gain and it's not part of the project specification to create such a `README.md` file. Altough the **evaluation process** part of every assignment does expect you to explain the code clearly, so it's in my benifit to do this._

## Source
+ **Subject PDF :** https://cdn.intra.42.fr/pdf/pdf/165162/en.subject.pdf

## Table Of Content


<br>

## Layout Explenations: 

+ **Project Name:** | _e.g; picine_c_00_

- **Assignment Name:** | _e.g; ex00_

/ **Goal of assignment:** | _Describing what the function needs to do_

{ **My Solution:** | _Describing what my solution to gain the desired output was_

! **Purpose of the assigment:** | _Descibing what I think the purpose of the assignment was, in terms of learning `c code`_

<br>
<br>

## ft_putchar

- **Assignment Name:** _ex00_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). The function should display a single character, e.g; 'a' passed as a parameter within function arguments. The 'a' character passed is of variable type `char`. I must utilise the `write` function which is part of the `#include <unistd.h>` library_

{ **My Solution:** _Passing a single char defined within a variable called `characther` to the function, and then printing it to console using the following syntax bellow. This assignment had no logic, just correct syntax_

! **Purpose of the assigment:** | _I learned that the write() function in `c` can display output to the terminal by specifying `write(1, &variable, 1);` where the first occurence of `1` specfies it's output, then the second `&variable` contains a variable type of char or a single directly passed char, 'a' or multiple char "aa". The final part of the `write()` func specifies how many char to print;_

<br>

### What I learned: 
**Note:** When passing a `variable type char` to the `write()` func I always need to place `&` before it.
**Note:** passing type data of `int` to the function does NOT work. I can however pass type `char` which converts to a number on the ascii-table. 
**Note:** I can NOT pass two char within a single `char variable type` to the `write()` func, a `char` is always a single character. I can pass a `string` which is array of characthers.
**Note:** A single `char` is always within single quotes: `''`. 
**Note:** A array of `char` is always within double quotes: `""`.

_It's also possible to pass a array of characters stored in a variable to the write func, but that is not in scope for now._

<br>

```c
// Double char NOT allowed:
char; c;
c = 'aa';
write(1, &c, 2);
// String passed doube char allowed: 
write(1, "aa", 2);
```
```c
// Single char:
char a = 'a'
write(1, "a", 1);
write(1, &a, 1);
```

<br>
<br>

## ft_print_alphabet

- **Assignment Name:** _ex01_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). The function should display the complete alphabet from a-z on a single line._

{ **My Solution:** _Working with the ascii-table I defined a variable of `data type char`, then incremnted the `char` declared variable with `+1` within a `while` loop. This results in the keycode corresponding to the `type char` variable declared being incremented. So from `a-z` I increment the char with 1, if I where to `printf()` the letter `a` with data type `int` (%d) I would get `97`. So when I reach `z` char which is `int` `122` I stop._

! **Purpose of the assigment:** | _I learned that within `c` the `data type char` characters defined, have a direct correspondation to a `data type int` number on the `ascii-table`. Meaning you can incremen charachers with integers, and also increment integers with cahracthers. Highly intresting, it's worth noting that you can print out the `ascii-table` like this:_
```c
#include <stdio.h>
#include <unistd.h>

int main(void) {
    for(int i = 0; i < 200; i++) {
        printf("The decimal ascii: %d \n The char ascii: %c \n", i, i);
    }
    return 0;
}
```

<br>

### What I learned: 
**Note:** Both data type of `int` && `char` have a direct correlation between them via the ascii-table. You can view this by simply choosing what data type to print the variable as.
**Note:** You can increment a data type of `char` with a data type of `int`. 
**Note:** All characthers printed out to the terminal will be on the same line, except if I specify a newline utilising; `"/n"`.
**Note:** I can incremnt a defined varaible within a while loop using; `var++`. 

<br>
<br>

## ft_print_reverse_alphabet

- **Assignment Name:** _ex02_

This assignment is almost identical to the one above, just reverse the while loop from untill reaching bigger integer equal to `z`. I now make sure to continue while loop untill reaching smaller integer equal to `a`. Instead of using variable++ I utilised variable-- within my while loop. **So still learned the same things as last assignment**.

<br>
<br>

## ft_print_numbers

- **Assignment Name:** _ex03_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing), with parameter arguments passed of type `void` (indicate it expects no arguments passed to func). The function should display the number 0-9 on a single line._

{ **My Solution:** _Working with the ascii-table I defined a variable of `data type char`, and assigned it a value of **`char` `0`**. I understand this might seem confusing, but it's totally allowed. Because the integer `0` can also be represented as character `"0"`. And character `"0"` is defined on the ascii-table, which tells me when I incremnt the char with `x++` it will give me the next following character on the ascii table. I simply continue incremnting the `type char` untill I have reached a `type char` defined on the ascii-table after `"9"` (**character 9**), then I stop looping._

! **Purpose of the assigment:** | _I learned that within `c` the `data type char` characters defined, can also hold the value of a integer represnted as `data type char`. This is evedent by the integers 0-9 being displayed on the ascii-table as `data type char`. Meaning it tough my I can increment once more a `data type char` with +1 to gain the second representation of the data type `char` on the ascii-table. As long as the data type passed to the `write()` func is data type `char` it's allowed._

<br>

```c
// Note how I defined char data type, and assinged '0' char to it. 
char		x;

x = '0';
write(1, "\n", 1);
while (x != ':')
{
    write(1, &x, 1);
    x++;
}
```

<br>

### What I learned: 
**Note:** Both data type of `int` && `char` have a direct correlation between them via the ascii-table. You can view this by simply choosing what data type to print the variable as.
**Note:** The data type `char` 0-9 live on the ascii table, making them accessible to the `write()` func which only take data type `char`.
**Note:** You can increment a data type of `char` with a data type of `int`. 
**Note:** All characthers printed out to the terminal will be on the same line, except if I specify a newline utilising; `"/n"`.
**Note:** I can incremnt a defined varaible within a while loop using; `var++`. 
**Note:** I can subtraact a defined varaible within a while loop using; `var--`. 


<br>
<br>

## ft_is_negative

- **Assignment Name:** _ex04_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing), with parameter arguments passed of type `int`. The function should display 'N' if int passed is negative and 'P' if int passed is possitve. (p=possitive, n=negative)._

{ **My Solution:** _The're once more isn't really a typical solution to this assignment as it just expects correct syntax no reall logic. Just utilise `if statments` to get result._

! **Purpose of the assigment:** | _I learned that within `c` the `if statemnts` defined work exactly like any-other language. The syntax follows either the brack formatting from `node JS` or the indetnation formatting of `python3`. I additionally also learned that the `data type int **0**` stands for `false`, and the `data type int **1**` stand for `true`._

<br>


<br>

```c
// Note how I defined char data type, and assinged '0' char to it. 
char		x;

x = '0';
write(1, "\n", 1);
while (x != ':')
{
    write(1, &x, 1);
    x++;
}
```

<br>

### What I learned: 
**Note:** The `data type int **0**` stands for `false`, and the `data type int **1**` stand for `true`. 
**Note:** The `if statemnts` defined work exactly like any-other language, you can follow `node JS` syntax. 

<br>
<br>












## Memory Address'(es)

- _https://www.w3schools.com/c/c_memory_address.php_

When a variable is created in C, a `memory address` is **assigned to the variable**. The memory address is the location of where the variable is stored on the computer. When we assign a value to the variable, it is stored in this memory address. We can pull the value from the memory address and assign it to a new variable at any time. View it kinda as returning value from a function into a fresh defined variable.

```c
#include <stdio.h>

void memoryShow(void) {
    int num = 42;
    printf("Assigned memory address, accessible within the function scope: %p", &num);
}

```

<br>

You should also note that &num is often called a "pointer". A pointer basically **stores the memory address of a variable** as its value. To print pointer values, we use the %p format specifier. A pointer is simply responsible for remembering where a variable value is stored within you're computers memory. 

---
<br>

## Pointers 

-  _https://www.w3schools.com/c/c_pointers.php_
- _https://www.w3schools.com/c/c_pointers_arrays.php_

A **pointer variable points** ( like > litteraly) **to a data type** (like int or char) of **the same type**, and is created with the `* operator`. The **address of the variable** you are working with is **assigned to the pointer**. 

**Note:** pointers must be handled with care, since it is possible to overwrite other data stored in memory.

```c
#include <stdio.h>

void pointerValue(void) {
    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
}

```

**Note**: the **`type` of the pointer** **must** to **match** the `type` **of the variable you're working with** (int in our example). It's vital for the `c` code to run as expected. And I am sure there are more reasons for it, like code readability that I don't yet see.

The above example is quite intruiging, as it clearly shows that the assigned `ptr`  value now holds the `memory-address` of the `variable value` `myAge`. 

<br>


**Good to Know**
There are `two` ways to declare pointer variables in `C`:
```bash
int* myNum;
int *myNum;
char* myNum;
char *myNum;
```

<br>


### How Are Pointers Related to Arrays







## Memory Management

- _https://www.w3schools.com/c/c_memory_management.php_


## C Assignment ex07

```c

// Functions need to be declared before usage
char convertNumToCharArray(int number) {
    char string[50];    // 20 so I can assure it's large enough to hold the converted number.| static ariable retains its value between function calls, I don't know why though.
    sprintf(string, "%d", number);
    printf("Converted number to following string num: %s \n", string);
    return string;
}

string = convertNumToCharArray(number);

```

### Error 1: 
```bash
returning ‘char *’ from a function with return type ‘char’ makes integer from pointer without a cast [-Wint-conversion]
```
- Recourse: 
    _https://stackoverflow.com/questions/37037165/return-makes-integer-from-pointer-without-a-cast-wint-conversion-return-candi_
    _https://stackoverflow.com/questions/12380758/error-function-returns-address-of-local-variable_
    
<br>


I have noted that the functions `return value` **must match it's type which it's declared** by. I like this feature of `C`, I have not yet seen the `char *` `type`. 

<br>

>  [Smart Person] If you want to have the function return a whole string, you could change its declaration to char *getkey(), but in that case you'll also have to take care of the allocation of the example array.

"Take care of the allocation", this seems to reffer to memory space in C, which is also totally new to me, altough kinda cool ngl.

> [Smart Person] Here's what the warning means. You tried to return a pointer. The function is supposed to return a character, which is represented as a small integer. The compile is willing to try to convert the pointer to an integer, in case that's what you really want to do, but since that's not usually a good idea, it warns you. Indeed, in this case the warning tells you that you probably made a mistake

<br>

**The asterisk `*` indicates that a variable is a pointer, and the type before the asterisk specifies the type of data the pointer will point to.**

```c
// Functions need to be declared before usage
char* convertNumToCharArray(int number) {
    char string[50];    // 20 so I can assure it's large enough to hold the converted number.| static ariable retains its value between function calls, I don't know why though.
    sprintf(string, "%d", number);
    printf("Converted number to following string num: %s \n", string);
    return string;
}

string = convertNumToCharArray(number);

```

By **changing the return type** to `char *`, you can return a pointer **to a valid memory location** (either dynamically allocated or a static variable) that holds the string representation of the number.

**|** Aha, I am kinda beginning to understand it now, the **pointers are always formatted as follows**: 
```bash
<data-type> * <variable-name>; 
```

<br>

_Why does a pointer exists?_

> [Smart Person] The local variables have a lifetime which extends only inside the block in which it is defined. The moment the control goes outside the block in which the local variable is defined, the storage for the variable is no more allocated (not guaranteed). Therefore, using the memory address of the variable outside the lifetime area of the variable will be undefined behaviour.

> [Smart Person] By using malloc you take memory from the HEAP (programm scope) and not from the STACK (function scope) - thus its 'visible' from outside. 

```c
    char* string = malloc(50 * sizeof(char));  // dynamically allocate mem
```
---

The functionality of a pointer in `C` is for allocating memory space within you're computer's runtime, to ensure the data, aka information you are either trying to store or access. Is accessible when the program executes at runtime. In `C` when NO pointer is utilised to point to a memory address the value of a declared variable can only live within a defined function or block of code. 

Meaning that when you wan't to return a variable value from within a called function, but you did not allocate any memory for the defined or calculated value to live within. It will be lost in the void, non accessible for any other functions who wish to work with that variable value.

But if you story the variable value in a dedicated memory address, then ALL functions can find that variable value when ever they wish during the entire runtime of the program. As the value will always be accessible from it's stored memory address. 

<br>
















