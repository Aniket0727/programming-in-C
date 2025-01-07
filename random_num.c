#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));                  // Seed the random number generator
    int random_num = rand();         // Generates a random number
    printf("Random number: %d\n", random_num);
    
    return 0;
}
