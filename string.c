#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50] = "Hello, World!";

    // strlen
    printf("Length of str1 ('%s'): %zu\n", str1, strlen(str1));

    // strcpy
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);

    // strncpy
    strncpy(str3, str2, 3); // Copy first 3 characters of str2 to str3
    str3[3] = '\0'; // Add null terminator
    printf("Copied first 3 characters of str2 to str3: %s\n", str3);

    // strcat
    strcat(str1, ", "); // Append ", " to str1
    strcat(str1, str2); // Append str2 to str1
    printf("Concatenated str1 and str2: %s\n", str1);

    // strncat
    strncat(str1, "!!!", 2); // Append first 2 characters of "!!!"
    printf("Concatenated str1 with '!!': %s\n", str1);

    // strcmp
    int cmp_result = strcmp(str1, str2);
    printf("Comparing str1 ('%s') and str2 ('%s'): %d\n", str1, str2, cmp_result);

    // strstr
    char *substr = strstr(str4, "World");
    if (substr) {
        printf("Substring 'World' found in str4 ('%s') at position: %ld\n", str4, substr - str4);
    } else {
        printf("Substring 'World' not found in str4\n");
    }

    // strchr
    char *char_pos = strchr(str4, 'W');
    if (char_pos) {
        printf("Character 'W' found in str4 ('%s') at position: %ld\n", str4, char_pos - str4);
    } else {
        printf("Character 'W' not found in str4\n");
    }

    // strrchr
    char *last_char_pos = strrchr(str4, 'l');
    if (last_char_pos) {
        printf("Last occurrence of 'l' in str4 ('%s') at position: %ld\n", str4, last_char_pos - str4);
    } else {
        printf("Character 'l' not found in str4\n");
    }

    // strtok
    char str5[50] = "This,is,a,comma,separated,string";
    printf("Tokenizing str5 ('%s'):\n", str5);
    char *token = strtok(str5, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    // strdup
    char *dup_str = strdup(str4);
    if (dup_str) {
        printf("Duplicated string str4 ('%s'): %s\n", str4, dup_str);
        free(dup_str); // Free dynamically allocated memory
    } else {
        printf("Failed to duplicate string\n");
    }

    return 0;
}


// Explanation
// String Length (strlen):

// Determines the length of the string (excluding \0).
// Copying Strings (strcpy, strncpy):

// Copies one string to another. strncpy allows partial copying with a limit.
// Concatenating Strings (strcat, strncat):

// Joins two strings. strncat allows controlled concatenation up to n characters.
// Comparing Strings (strcmp):

// Compares two strings lexicographically.
// Searching (strstr, strchr, strrchr):

// Searches for substrings or characters in a string.
// Tokenizing (strtok):

// Splits a string into tokens using a delimiter.
// Duplicating (strdup):

// Creates a dynamic copy of the string.