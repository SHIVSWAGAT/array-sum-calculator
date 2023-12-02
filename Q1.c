#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum_of_elements = 0;
    for (int i = 0; i < n; i++) {
        sum_of_elements += arr[i];
    }
    printf("The sum of elements is: %d\n", sum_of_elements);
    return 0;
}
