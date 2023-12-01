#include <stdio.h>

void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        
        int j = i + 1;
        int key = a[j];
        
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i++;
        }
        
        a[j] = key;
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("First array: ");
    display(a, n);
    
    insertion_sort(a, n);
    
    printf("Sorted array: ");
    display(a, n);
    
    return 0;
}
