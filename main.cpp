#include <bits/stdc++.h> //THử viện tổng
#include <iostream>
#include <stdio.h>

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
    getchar();
}

//xuất 1 cuốn sách
void XuatSach (struct DANHSACH &sach) {
    cout << "Quyen sach cua ban la : " << sach.TenSach << endl;
    cout << "Quyen sach co gia la : " << sach.giaTien << endl;
}

//nhập nhiều cuốn sách
void nhapDSSach(int sol, struct DANHSACH sach[]) {
    for (int i = 0; i < sol; i++) {
        NhapSach(sach[i]);
    }
}

//xuất nhiều cuốn sách
void xuatDSSach(int sol, struct DANHSACH sach[]) {
    for (int i = 0; i < sol; i++)
    {
        printf("[%d]\n", i + 1);
        XuatSach(sach[i]);
        cout << endl;
    }
}
int main () {
    int n;
    cout << "Nhap so luong sach muon tao: "; cin >> n; getchar();
    if (n < 0) {
        cout << "Khong hop le!!! Exit";
        exit(0);
    } else {
        struct DANHSACH sach[n];
        nhapDSSach(n, sach);
        xuatDSSach(n, sach);
    }
   
    return 0;
}