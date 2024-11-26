#include <stdio.h>

int main() {
    int ngay, thang;
    printf("nhap thang, nam sinh: ");
    scanf("%d %d", &ngay, &thang);

    if ((thang == 3 && ngay >= 21) || (thang == 4 && ngay <= 19)) {
        printf("Bach Duong");
    } else if ((thang == 4 && ngay >= 20) || (thang == 5 && ngay <= 20)) {
        printf("Kim Nguu");
    } else if ((thang == 5 && ngay >= 21) || (thang == 6 && ngay <= 20)) {
        printf("Song Tu");
    } else if ((thang == 6 && ngay >= 21) || (thang == 7 && ngay <= 22)) {
        printf("Cu Giai");
    } else if ((thang == 7 && ngay >= 23) || (thang == 8 && ngay <= 22)) {
        printf("Su Tu");
    } else if ((thang == 8 && ngay >= 23) || (thang == 9 && ngay <= 22)) {
        printf("Xu Nu");
    } else if ((thang == 9 && ngay >= 23) || (thang == 10 && ngay <= 22)) {
        printf("Thien Binh");
    } else if ((thang == 10 && ngay >= 23) || (thang == 11 && ngay <= 21)) {
        printf("Bo Cap");
    } else if ((thang == 11 && ngay >= 22) || (thang == 12 && ngay <= 21)) {
        printf("Nhan Ma");
    } else if ((thang == 12 && ngay >= 22) || (thang == 1 && ngay <= 19)) {
        printf("Ma Ket");
    } else if ((thang == 1 && ngay >= 20) || (thang == 2 && ngay <= 18)) {
        printf("Bao Binh");
    } else if ((thang == 2 && ngay >= 19) || (thang == 3 && ngay <= 20)) {
        printf("Song Ngu");
    }

    return 0;
}
