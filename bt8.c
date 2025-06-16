#include<stdio.h>
int main()
{
    /*in ra các số chẵn từ 2 đến 20*/
    int x =0;
    for(int i=2; i<=20; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d \n",i);
        }
    }
return 0;
}