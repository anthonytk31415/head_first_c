#include <stdio.h>
#include <string.h>


char songs[][10] = {
    "barry",
    "casper", 
    "ant", 
    "man",
};

size_t size = sizeof(songs) / sizeof(songs[0]);

void find_track(char search_term[]){

    int i; 
    for (i = 0; i < size; i ++ ){
        if (strcmp(songs[i], search_term) == 0) {
            printf("we found it at index: %i.\n", i);
            break; 
        }
    }
}   

int main() {
    find_track("ant");

    find_track("man");
    return 0; 
}