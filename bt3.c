#include<stdio.h>
int main(){
    /*Xác định mức pin và
     hiển thị thông báo tương ứng (Thấp, Trung bình, Cao).*/
    int x =0;
    
    printf("number pin (x): \n");
    scanf("%d",&x);
   
    if(1<=x && x<20)
    {
        printf("low_battery. \n");

    }
    if(20<=x && x<80)
    {
        printf("normal_battery. \n");
    }
    if(80<=x && x<=100)
    {
        printf("high_battery. \n");
    }

    return 0;
}