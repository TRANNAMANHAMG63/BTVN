/*3. A monitoring station manages multiple electronic devices. Each device has:
- Device ID (string, max 10 characters)
- Status (0: inactive, 1: active)
- Technical Specifications:
• Operating voltage (float)
• Current consumption (float)
• Operating time during the day (hours)
Requirements:
1. Define two `struct`: `TechnicalSpec` and `Device` (with nesting).
2. Input data for `n` devices (use an array of `struct`)
3. Write a function to calculate the total daily energy consumption for each device
(Formula: P = U * I * t, in Wh).
4. Print a list of active devices with consumption greater than 1000 Wh.
*/
#include <stdio.h>

struct TechnicalSpec {
    float voltage;
    float current;
    float time;
};

struct Device {
    char id[11];
    int status;
    struct TechnicalSpec spec;
};

int main() {
    int n;

    printf("Nhap so luong thiet bi: ");
    scanf("%d", &n);

    struct Device ds[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Thiet bi %d ---\n", i + 1);

        printf("ID thiet bi (toi da 10 ky tu): ");
        scanf("%s", ds[i].id);

        printf("Trang thai (0: khong hoat dong, 1: hoat dong): ");
        scanf("%d", &ds[i].status);

        printf("Dien ap hoat dong (V): ");
        scanf("%f", &ds[i].spec.voltage);

        printf("Dong dien (A): ");
        scanf("%f", &ds[i].spec.current);

        printf("Thoi gian hoat dong (gio): ");
        scanf("%f", &ds[i].spec.time);
    }

    printf("\n--- Danh sach thiet bi da nhap ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %s | Trang thai: %d | U: %.2f V | I: %.2f A | t: %.2f h\n",
               ds[i].id, ds[i].status, ds[i].spec.voltage, ds[i].spec.current, ds[i].spec.time);
    }

    return 0;
}
