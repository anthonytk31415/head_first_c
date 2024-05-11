// Strings 

#include <stdio.h>
#include <string.h>

int main(){
    // char my_str[] = "ab"; 
    char my_str[] = "the tortured poets department"; 
    // char my_str2[] = "a"; 
    char my_str2[] = "the tortured poets dept"; 
    char my_str3[] = "tortured";
    char my_str1[sizeof(my_str)]; 

    // strcpy: copies string from one to another; does so with pointers 
    strcpy(my_str1, my_str);
    puts(my_str1);

    // strchr
    // char *strchr(const char *str, int c)
    // strchr returns a pointer to the first occurrence of the char found 
    char *found_str; 
    found_str = strchr(my_str, ' ');
    puts(found_str);


    // strcmp
    // Say w1 and w2 are strings and a1, a2 are chars in the string. 
    // strcmp returns 0 if they're all equal; otherwise, it returns a1 - a2 at the first occurrence 
    // of an unequal char, their diff of ascii values. 
    int x = strcmp(my_str, my_str2);
    printf("result of str compare: %i\n", x);
    int i = 22;
    printf("char output: %c' int: %i\n", my_str[i], my_str[i]);
    printf("char output: %c' int: %i\n", my_str2[i], my_str2[i]);

    // strstr
    // char * strstr ( const char *, const char * );
    // returns the pointer of the first occurrence of 2nd string in the 1st stirng or 
    // if it does not exist, the null pointer. 
    char *find_pointer = strstr(my_str, my_str3);
    // here you can find the length between two pointers in the same array
    size_t length = find_pointer - my_str; 
    printf("%s is found at position %p in:  %s\n", my_str3, find_pointer, my_str);
    printf("length is %zu\n", length);
    printf("at %zu, we find: %s\n", length, &my_str[length]);

    // strlen
    // returns the of the size_t length of the string
    printf("length of %s is %zu\n", my_str, strlen(my_str));

    // strcat
    // char *strcat(char *destination, const char *source)
    // concatenate the source with the destination so dest = dest + source; 
    // destination needs to have sufficient array storage 
    // 
    char str4[100];
    puts(str4); 
    printf("length of str4: %zu\n", strlen(str4));
    strcpy(str4, "hey yo"); 
    printf("length of str4: %zu; str4 = %s\n", strlen(str4), str4);



    return 0;
}   


