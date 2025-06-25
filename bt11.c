#include <stdio.h>

int main()
{
    /**
     * Đo 10 lần nhiệt độ và tính trung bình.
     */
    int sum = 0;
    int i = 1;
    while (i <= 10)
    {
        int x;
        printf("#%d = ", i);
        scanf("%d", &x);
        sum = sum + x;
        i++;
    }

    printf("Average value = %f", (float)sum / 10);

    return 0;
}
