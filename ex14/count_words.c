void count_words(char *str, int *wordCount) {
    int isInsideWord = 0;
    *wordCount = 0; // Initialize wordCount to 0

    while (*str != '\0') {
        if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r') {
            if (isInsideWord) {
                isInsideWord = 0; // We are outside a word
            }
        } else {
            if (!isInsideWord) {
                isInsideWord = 1; // We are inside a new word
                (*wordCount)++; // Increment wordCount using the pointer
            }
        }
        str++;
    }
}
