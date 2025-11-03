// #include <iostream>
// using namespace std;

// struct SinhVien
// {
//     char ten;
//     int nam_sinh;
//     int Khoa;
// };

// int main(){

//     cout << sizeof(SinhVien);

//     return 0;
// }

#include <stdio.h>

typedef struct SinhVien{
    char ten;
    int nam_sinh;
    int khoa;
} SV;

int main(){
    printf("%d",sizeof(SV));
    return 0;
}
