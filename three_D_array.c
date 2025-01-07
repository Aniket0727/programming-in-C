#include <stdio.h>

int main() {
    // Declare and initialize a 3D array with 2 matrices, 2 rows, and 3 columns
    int arr[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Print elements of the 3D array
    for (int i = 0; i < 2; i++) {         // Loop through depth (2 matrices)
        for (int j = 0; j < 2; j++) {     // Loop through rows (2 rows per matrix)
            for (int k = 0; k < 3; k++) { // Loop through columns (3 columns per row)
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
