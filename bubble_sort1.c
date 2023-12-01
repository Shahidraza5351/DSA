#include<stdio.h>

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n]; 

    printf("Enter %d elements:\n", n);
    for (int k = 0; k < n; k++) {
        printf("Enter the %d element: ", k + 1);
        scanf("%d", &a[k]);
    }

    printf("Original array: ");
    display(a, n);

    bubble_sort(a, n);

    printf("Sorted array: ");
    display(a, n);

    return 0;
}
