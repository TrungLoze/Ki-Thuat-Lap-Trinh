#include<stdio.h>
typedef struct {
    char ho_ten[20];
    unsigned int tuoi;
    enum {Nam,Nu} gioi_tinh;
    struct {
        char thanh_pho[20];
        char duong[20];
        int so_nha;
    } dia_chi;
} SinhVien;

int main(){
    printf("%d",sizeof(SinhVien));
    return 0;
}
