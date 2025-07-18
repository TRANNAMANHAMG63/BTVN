/*2. A system has 5 DC motors, each with a speed stored in an array `int speed[5]`.
Write a program to:
- Input current speed values for 5 motors.
- Write a function using pointers to find the motor with the highest speed, and
display its index and value.
- Write another function using pointers to increase the speed of all motors running
below 1000 RPM by 10%.
Hint:
- Use `int*` to pass the array for maximum search.
- Use `void adjustSpeed(int *arr, int size);` for speed adjustment.
*/
#include <stdio.h>
void findMaxSpeed(int *arr, int size) {
    int maxIndex = 0;
    int maxSpeed = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxSpeed) {
            maxSpeed = *(arr + i);
            maxIndex = i;
        }
    }

    printf("Dong co co toc do cao nhat: dong co %d, toc do = %d vong/phut\n", maxIndex, maxSpeed);
}

void adjustmentSpeed(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 1000) {
            *(arr + i) = *(arr + i) + (*(arr + i) / 10);
        }
    }
}

int main() {
    int speed[5];
    printf("Nhap toc do cho 5 dong co (vong/phut):\n");
    for (int i = 0; i < 5; i++) {
        printf("Dong co %d: ", i);
        scanf("%d", &speed[i]);
    }

    findMaxSpeed(speed, 5);
    adjustmentSpeed(speed, 5);
    
    printf("\nToc do cac dong co sau khi dieu chinh:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dong co %d: %d vong/phut\n", i, speed[i]);
    }

    return 0;
}
