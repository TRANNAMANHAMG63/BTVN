#include<stdio.h>
int main()
{
    /*Bật quạt làm mát nếu nhiệt độ vượt ngưỡng cho phép.*/
    int t =0;
    printf("temperature (t): ");
    scanf("%d",&t);

    if(t>28)
    {
        printf("turn on the fan. \n");
    }
    else
        {
        printf("turn off the fan. \n");
    }

return 0;
}