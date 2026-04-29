#include <stdio.h>
#include "string_utils.h"

int main() {
    char kata[100] = "Malam";
    
    printf("Kata asli: %s\n", kata);
    
    printf("Apakah palindrome? %s\n", is_palindrome("radar") ? "Ya" : "Tidak");
    
    to_upper(kata);
    printf("To Upper: %s\n", kata);
    
    reverse(kata);
    printf("Reverse: %s\n", kata);
    
    return 0;
}