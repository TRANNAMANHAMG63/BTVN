#include<stdio.h>
int main()
{
    /*tính tổng các số từ 1 đến 10*/
    int x =0;
    for(int i=1; i<= 10; i++)
    {
        x = x + i;
    }
    printf("result = %d", x);
    return 0;
}