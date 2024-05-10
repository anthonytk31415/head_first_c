#include <stdio.h>



void update_char_array(char *arr){
    scanf("%6s", arr);
}



int main() {
    char name[40]; 
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    // update_char_array(name); 
    printf("%s", name);


    return 0; 
}