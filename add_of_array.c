#include <stdio.h>

void add_array(int a[], int b[], int m, int c[]) {
    for (int i = 0; i < m; i++) {
        c[i] = a[i] + b[i];
    }
}

int main() {
    int m;
    printf("Enter the number of elements: ");
    scanf("%d", &m);

    int a[m], b[m], c[m];

    printf("Enter elements of array 'a': ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of array 'b': ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    add_array(a, b, m, c);

    printf("Elements of the new array:\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n", c[i]);
    }

    return 0;
}
