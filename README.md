# Picine C 00 | Learning C Basics

_This documents covers what I have learned from doing these exersizes. This is for my personal gain and it's not part of the project specification to create such a `README.md` file. Altough the **evaluation process** part of every assignment does expect you to explain the code clearly, so it's in my benifit to do this._

## Layout Explenations: 

+ **Project Name:** | _e.g; picine_c_00_

- **Assignment Name:** | _e.g; ex00_

{ **My Solution:** | _Describing what my solution to gain the desired output was_

! **Purpose of the assigment:** | _Descibing what I think the purpose of the assignment was, in terms of learning `c code`_

## Table Of Content




















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
















