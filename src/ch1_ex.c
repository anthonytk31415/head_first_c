// #include <stdio.h>


// Some logic: 

// int main()
// {
//     int card = 1;
//     if (card > 1)
//         card = card - 1;
//         if (card < 7)
//             puts("Small card");
//     else {
//         puts("Ace!");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

/**
 * print with a for loop and using string length; 
 * Interestingly, it just prints the position of the ascii or so string. 
 * Also introduces char arrays
*/
void print_string(char s[]){
    int i; 
    for (i = 0; i < strlen(s); i ++){
        printf("%i", s[i]);
        puts("\n");
    }

    // sizeof(int) returns size of an int  
    printf("sizeof(int): %zu \n", sizeof(int));
    // sizeof(s) will return just the size of the pointer of the char array
    printf("sizeof this string: %zu", sizeof("some string"));
}

// Using Pointers

// Pointer variable: 

void pointer_fun(){
    // pointer to an address that stores
    int x = 4; // instantiate variable x with 4

    // use %p to print out the location of the hex (base 1b) format location
    printf("x lives at %p", &x);

    int *address_of_x = &x; // this is a pointer variable for an address that is an int; &x refers to the address at x
    
    printf("address: %p", address_of_x);
    int value_stored_at_x = *address_of_x; 
    printf("value of x: %i", value_stored_at_x);
    *address_of_x  = 99;  // Store the value 99 to that pointer address; note we are dereferencing address_of_x to the element at that address

    // Summary: 
    // - &var_name will will tell you where it's stored
    // - * takes an address and returns what is stored there. 

}


// int* means your arg is taking a pointer. 
void update_coordinates(int* x, int* y)
{
    *x += 1; 
    *y -= 1; 
}


// the array variable is just like a pointer that points to the first part of the array
// 


int main()
{
    int x = 0;
    int y = 0; 
    update_coordinates(&x, &y); 
    printf("x: %i, y: %i", x, y);
    print_string("hey yo \n");

    pointer_fun();

}



// int main()
// {
//     int card = 1;
//     if (card > 1)
//     {
//         card = card - 1;
//         if (card < 7)
//             puts("Small card");
//         else
//             puts("Ace!");
//     }
//     return 0;
// }

// writing a for loop
// int main()
// {
//     int i; 
//     for (i = 0; i < 5; i ++){
//         printf("%i", i); 
//     }
//     return 0;
// }


