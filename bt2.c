#include<stdio.h>
int main(){
    /*Kiểm tra điện áp đầu vào và
     hiển thị trạng thái 'Ổn định' hoặc 'Cảnh báo'.*/

    float a = 0.0;
    printf("voltge (a) = ");
    scanf("%f",&a);

    if(110 <= a && a <= 220)
    {
        printf("normal. \n");
    }
    else{
        printf("warning. \n");
    }
return 0;
}