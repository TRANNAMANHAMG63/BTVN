#include <stdio.h>
#include <unistd.h>

int main()
{
    /**
     * Chớp tắt LED 10 lần với khoảng dừng.
     */
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("LED is OFF\n");
        }
        else
        {
            printf("LED is ON\n");
        }
        sleep(1);
    }

    return 0;
}