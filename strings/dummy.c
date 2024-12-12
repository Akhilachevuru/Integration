#include <stdio.h>
#include <string.h>

// Function to rotate the number right n times
void rotateRight(char *num, int n) {
    int len = strlen(num);
    n = n % len; // Handle cases where n > len
    printf("%d\n",len);
    if (n == 0) {
        return; // No rotation needed
    }

    // Temporary array to store the result
    char temp[len + 1];
    
    // Perform the rotation
    for (int i = 0; i < len; i++) {
        temp[(i + n) % len] = num[i];
    }
    
    temp[len] = '\0'; // Null-terminate the string
    strcpy(num, temp); // Copy back the result to the original array
}

int main() {
    char number[] = "123456"; // Input number as a string
    int rotations = 3; // Number of rotations

    printf("Original number: %s\n", number);

    // Rotate the number
    rotateRight(number, rotations);

    printf("Rotated number: %s\n", number);

    return 0;
}

