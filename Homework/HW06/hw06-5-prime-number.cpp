/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number :\n");
    scanf("%d", &n);

    printf("Output:\n");

    for (int i = n - 1; i > 1; i--) {
        int is_prime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }

    return 0;
}