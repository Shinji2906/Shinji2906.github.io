#include <bits/stdc++.h> //THử viện tổng
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct DienMayXanh
{
    string Tensanpham;
    int GiaTien;
};
// Nhập tên sản phẩm
void NhapSanPham (struct DienMayXanh &sp) {
    cout << "Nhap ten san pham ban muon mua : ";
    getline(cin, sp.Tensanpham);
    cout << "Gia tien cua san pham la : ";
    cin >> sp.GiaTien;
    getchar();
}
// máy tính tiền sang hàng nghìn vnd
string MayTinhTien(int gia) {
    stringstream ss;
    string ketqua;
    ss << gia;
    string str = ss.str();

    int count = 0;
    for (int i = str.length() - 1; i >= 0; --i) {
        ketqua.insert(ketqua.begin(), str[i]);
        count++;
        if (count == 3 && i != 0) {
            ketqua.insert(ketqua.begin(), '.');
            count = 0;
        }
    }
    return ketqua;
}
// mua 1 sản phẩm
void MuaSanPham (struct DienMayXanh &sp) {
    cout << "Hien ban dang mua san pham : " << sp.Tensanpham << endl;
    cout << "Gia tien cua san pham la : " << MayTinhTien(sp.GiaTien * 1000) << "vnd" << endl;
}

// nhập order nhiều sản phẩm
void NhapNhieuSanPham (struct DienMayXanh sp[], int n) {
    for (int i = 0; i < n; i++) {
        NhapSanPham(sp[i]);
    }
}
// Mua nhiều sản phẩm cùng 1 lúc
void MuaNhieuSanPham (struct DienMayXanh sp[], int n) {
    for (int i = 0; i < n; i++) {
        MuaSanPham(sp[i]);
    }
}


int main () {
    int n;
    cout << "Vui long nhap so luong san pham ban muon mua tu DienMayXanh : ";
    cin >> n;
    getchar();
    struct DienMayXanh sp[n];
    NhapNhieuSanPham(sp, n);
    MuaNhieuSanPham(sp, n);
    cout << "Da mua thanh cong!!!";
    return 0;
}