#include <stdio.h>

void merge_arrays(int arr1[], int size1, int arr2[], int size2, int merged_arr[]) {
    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged_arr[k] = arr1[i];
            i++;
        } else {
            merged_arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        merged_arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        merged_arr[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged_size = size1 + size2;
    int merged_arr[merged_size];

    merge_arrays(arr1, size1, arr2, size2, merged_arr);

    printf("Merged array: ");
    for (int i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}