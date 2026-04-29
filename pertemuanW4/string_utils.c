#include "string_utils.h"
#include <string.h>
#include <ctype.h>

// Membalikkan string di tempat (in-place)
void reverse(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

// Mengecek apakah string palindrome
bool is_palindrome(const char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) return false;
    }
    return true;
}

// Mengubah string menjadi huruf kapital
void to_upper(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}