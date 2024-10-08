#include <stdio.h>

int main() {
    int predefinedArray[] = {1, 2, 3, 4, 5};
    int newArray[sizeof(predefinedArray) / sizeof(predefinedArray[0])];

    // Output the size of the new array
    printf("Size of new array: %ld\n", sizeof(newArray) / sizeof(newArray[0]));

    return 0;
}

