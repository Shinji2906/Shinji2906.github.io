#include <iostream> 
#include <string>

using namespace std;

struct DANHSACH {
    string TenSach;
    float giaTien;
};

//Code mảng sách

void NhapSach (struct DANHSACH &sach) {
    cout << "Nhap ten sach : ";
    getline(cin, sach.TenSach);
    cout << "Nhap gia tien cua sach: ";
    cin >> sach.giaTien;
}

void XuatSach (struct DANHSACH &sach) {
    cout << "Quyen sach cua ban la : " << sach.TenSach << endl;
    cout << "Quyen sach co gia la : " << sach.giaTien;
}

int main () {
    struct DANHSACH sach;
    NhapSach(sach);
    XuatSach(sach);
    return 0;
}