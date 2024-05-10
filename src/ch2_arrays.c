#include <stdio.h>

void skip(char *msg)
{
    puts(msg + 3);
}



// Examples of using pointers with arrays and char strings
int main()
{

    char my_string[] = "this is a string";
    char *my_string1 = "this is my other string";

    printf("address at mystring[]: %s \n", my_string);
    printf("address at mystring[]: %s \n", my_string1);


    // *msg is the pointer to the char array, pointing at the 0th char, which is i
    // using %c prints the char
    char *msg = "i can do it with a broken heart";

    // use %c to print out characters
    printf("address at *msg: %c \n", *msg);

    // using %i prints the int
    // using %i on a char prints the ASCII code
    printf("address at *msg: %i \n", *msg);
    printf("address at *msg: %i \n", 22);

    int nums[] = {11, 22, 33};

    // addresses start at 0th index; and ith index is the address of the place at 0 + i
    printf("should be equivalent: %i \n", nums[2]);
    printf("same as above: %i \n", *(nums + 2));

    puts("testing skip: \n");
    // note that the function skip() expects a char pointer msg. *msg means msg is a pointer. 
    // but we refer to it as msg. 
    skip(msg);

    // we have different pointer types because they occupy different sizes. 
    // note: use %zu for long, which is the output of sizeof(arg)
    printf("size of int: %zu \n", sizeof(int));
    printf("size of char: %zu \n", sizeof(char));

    int doses[] = {1, 2, 3, 1000}; 

    // note these are all equivalent
    printf("3* doses: %i\n", 3[doses] );
    printf("3* doses: %i\n", doses[3]);
    printf("3* doses: %i\n", *(doses + 3));
    printf("3* doses: %i\n", *(3 + doses));

    // really youre doing array arithmetic. meaning array[n] is the nth position after where array starts, which 
    // is a pointer at the array[0] position. 
    // and this is the same as the n[array] which is the n position + the array position. 
    // and it follows the addition commutative property: a + b = b + a



    return 0;
}