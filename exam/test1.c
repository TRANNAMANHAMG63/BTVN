/*1. A microcontroller reads temperature data from 10 sensors on an electronic board.
Writing a program with requirements:
- Input 10 temperature values (float) from keyboard.
- Display values that exceed 50°C to the screen.
- Calculate and print the average temperature of the sensors with values below
50°C.
*/
#include<stdio.h>
int main() 
{
    float temp[10];
    printf("Enter 10 values:\n");
    for(int i = 0; i < 10; i++) {
        printf("Sensor %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    float sum_low50 = 0.0;
    int count_low50 = 0;

    printf("\nTemp > 50do_C:\n");
    for(int i = 0; i < 10; i++) {
        if(temp[i] > 50.0) {
            printf("Sensor %d: %.2f do_C\n", i + 1, temp[i]);
        }
    }

    for(int i = 0; i < 10; i++) {
        if(temp[i] < 50.0) {
            sum_low50 += temp[i];
            count_low50++;
        }
    }
    if(count_low50 > 0) {
        float average = sum_low50 / count_low50;
        printf("\nAverage temp of sensor low 50_doC: %.2f do_C\n", average);
    } else {
        printf("\nKhong co cam bien duoi 50do_C.\n");
    }
    return 0;
}