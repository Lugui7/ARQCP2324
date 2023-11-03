#include <stddef.h>

void format_string(char *str) {
    int capitalize = 1;  // Flag to indicate whether the next character should be capitalized
    char *dest = str;  // Destination pointer for writing the formatted string
    char *prev = NULL;  // Pointer to the previous character (for handling spaces)


    for (char *ptr = str; *ptr; ++ptr) {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == '\r') {
            if (!prev) {
                continue;
            }
            if (!capitalize) {
                *dest++ = ' ';  
                capitalize = 1;
            }
            prev = NULL;  
        } else if (capitalize) {
            if (*ptr >= 'a' && *ptr <= 'z') {
                *dest++ = *ptr - ('a' - 'A'); 
            } else {
                *dest++ = *ptr;
            }
            capitalize = 0;  
            prev = ptr;  
        } else {
            if (*ptr >= 'A' && *ptr <= 'Z') {
                *dest++ = *ptr + ('a' - 'A');  
            } else {
                *dest++ = *ptr;
            }
            prev = ptr;  
        }
    }

    // Remove trailing spaces and null-terminate the string
    while (dest > str && (*(dest - 1) == ' ' || *(dest - 1) == '\t' || *(dest - 1) == '\n' || *(dest - 1) == '\r')) {
        --dest;
    }
    *dest = '\0';
}


