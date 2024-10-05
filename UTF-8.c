#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Accepts a character string (UTF-8 encoded) and determines 
    whether or not the string is ASCII.
    Note: A string is ASCII if all bytes are between 0 and 127. 
    @return int32_t, 1 for valid ASCII and 0 for invalid ASCII*/
int32_t is_ascii(char str[]){
    int index = 0;

    /* Iterate through the entire array, if a character is not 
        ASCII, return 0.
    */
    while(str[index] != 0){
        if(str[index] < 0 || str[index] > 127){
            return 0;
        }
        index += 1;
    }

    /* If we successfully iterated through the entire array,
        the character is ASCII, so return 1.
    */
    return 1;
}

int main(){
    // Get user input and get rid of the newline
    char input[100];
    fgets(input, 100, stdin);
    input[strlen(input) - 1] = '\0';

    // For design
    puts("=== Output ===");

    // Tells the user whether the input is ASCII or not
    printf("Is %s ASCII? %d\n", input, is_ascii(input));
}