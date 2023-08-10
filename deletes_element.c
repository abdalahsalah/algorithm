#include <stdio.h>

void deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Error: Invalid position\n");
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Element at position %d deleted successfully\n", position);
}

int main() {
    int arr[] = {5, 2, 8, 12, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int position;
    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    deleteElement(arr, size, position);

    if (position >= 0 && position < size - 1) {
        printf("Updated array: ");
        for (int i = 0; i < size - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}