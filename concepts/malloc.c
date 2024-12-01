#include <stdio.h>
#include <stdlib.h>  // For malloc, free

int main() {
    int *ptr;
    int n, i;

    // Ask the user for the number of integers they want to store
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    // Input values
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Output values
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}



// this simple program tells use of malloc() to allocate block of heap memory dynamically
// malloc returns void pointer always if the memory has been allocated sucessfully otherwise it returns NULL
//  ptr = (int*)malloc(n * sizeof(int));
// The returned pointer ptr is of type int*, so it's cast from void* to int*. 
// It's good practice to check if malloc was successful:
// if (ptr == NULL)
// Once the memory is no longer needed, it should be freed using the free function:free(ptr)
// When you allocate memory dynamically, you need to free it when you're done to avoid memory leaks
// When using dynamically allocated memory (e.g., arrays), be careful not to access memory beyond the allocated size, as this could lead to segmentation faults or undefined behavior.
// The memory allocated by malloc contains random values. You should either initialize the memory or use functions like calloc that initialize memory to zero.

// calloc: Similar to malloc, but it also initializes the allocated memory to zero:
// void *calloc(size_t num, size_t size);

// realloc: If you want to resize a previously allocated memory block, you can use realloc:
// void *realloc(void *ptr, size_t new_size);

