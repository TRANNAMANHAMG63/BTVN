#include<stdio.h>
int main()
    {
         /**
     * Chuyển đổi chế độ hoạt động của thiết bị dựa vào nút nhấn.
     */
    int x;
    scanf("%d",&x);

    if(x==1)
    {
        printf("turn_on \n");
        printf("the program is running. \n");
    }
    else if(x==0)
    {
        printf("turn_off.\n");
        printf("the program is stop. \n");
    }

return 0;
}