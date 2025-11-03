#include <stdio.h>

// Fixed: nested struct name cannot start with a digit and member access must use instance names.
struct Xe_o_to{
    char model[20];
    double khoi_luong;
    char mau_son[20];
    struct bon_banh{
        char chung_loai[20];
        float ban_kinh;
        double khoi_luong;
    };
};

int main(){
    printf("Hello World");
    return 0;
}