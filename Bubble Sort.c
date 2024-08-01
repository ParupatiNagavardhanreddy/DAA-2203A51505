#include <stdio.h>

#define SIZE 5  

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    
    for (i = 0; i < size - 1; i++) {
        
        for (j = 0; j < size - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[SIZE] = {64, 34, 25, 12, 22};  
    int i;

    printf("Original array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, SIZE);

    printf("Sorted array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
