#include<stdio.h>
int main()
{
    /*Kiểm tra nhiệt độ và bật/tắt đèn LED tương ứng*/
    int c = 0;
    printf("Temperature (c) = ");
    scanf("%d",&c);

    if(c<80)
    {
        printf("turn on_led. \n"); 
    }
    else 
    {
        printf("turn off_led. \n");
    }
    return 0;

}