#include <stdio.h>

#define BUFFER_SIZE 256 // Set buffer size

int main() {
    FILE *file = fopen("demo.txt", "rb"); // Open file in binary read mode
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    unsigned char buffer[BUFFER_SIZE]; // Buffer to hold data
    size_t bytesRead;

    // Read and print data chunk by chunk
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, file)) > 0) {
        // Print the data read (as characters)
        for (size_t i = 0; i < bytesRead; i++) {
            putchar(buffer[i]); // Print each character to the console
        }
    }

    fclose(file); // Close the file
    return 0;
}
