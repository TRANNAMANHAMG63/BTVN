/*Write a program that:
- Inputs two integers `a` and `b`.
- Uses a pointer-based function to swap the values of `a` and `b`.
- Prints the values after swapping.
Implement the function:
void swap(int *x, int *y);
❌ Do not swap directly in `main` using `a = b;*/
#include<stdio.h>
    void swap(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

int main() {
    int a, b;
    printf("Enter value: \n");
    scanf("%d%d", &a, &b);
    printf("value: a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("value affter swap: a = %d, b = %d\n", a, b);

    return 0;
}