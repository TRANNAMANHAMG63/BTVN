/*Write a C program that:
- Inputs an integer `n` (1 ≤ n ≤ 100) and an array of `n` integers.
- Prints the input array.
- Calculates and prints how many elements are greater than the average value of
the array.*/
#include<stdio.h>
int main() {
    int n;
    int arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 1 && arr[i] <= 100) {
            printf("%d", arr[i]);
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n;

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > average) {
            count++;
        }
    }
    printf("elements are greater than the average(%.2f): %d\n", average, count);
    

    return 0;
}
