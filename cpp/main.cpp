#include <bits/stdc++.h> //THử viện tổng
#include <iostream>
#include <stdio.h>

using namespace std;

struct CDgame
{
    string Tengame;
    int GiaTien;
};
// Nhap ten 1 dia CD game
void NhapCDgame (struct CDgame &cd) {
    cout << "Nhap ten dia CD game ban muon sell : ";
    getline(cin, cd.Tengame);
    cout << "Gia tien cua CD game la : ";
    cin >> cd.GiaTien;
    getchar();
}
// in số tiền
string formatNumber(int num) {
    stringstream ss;
    string result;
    ss << num;
    string str = ss.str();

    int count = 0;
    for (int i = str.length() - 1; i >= 0; --i) {
        result.insert(result.begin(), str[i]);
        count++;
        if (count == 3 && i != 0) {
            result.insert(result.begin(), '.');
            count = 0;
        }
    }
    return result;
}
// xuất tên đĩa CD và số tiền
void XuatCDgame (struct CDgame &cd) {
    cout << "Hien ban dang sell CD game : " << cd.Tengame << endl;
    cout << "Gia tien cua dia CD game la : " << formatNumber(cd.GiaTien * 1000) << "vnd" << endl;
}

// nhập nhiều số lượng đĩa CD
void NhapNhieuCDgame (struct CDgame cd[], int n) {
    for (int i = 0; i < n; i++) {
        NhapCDgame(cd[i]);
    }
}
void XuatNhieuCDgame (struct CDgame cd[], int n) {
    for (int i = 0; i < n; i++) {
        XuatCDgame(cd[i]);
    }
}


int main () {
    int n;
    cin >> n;
    getchar();
    struct CDgame cd[n];
    NhapNhieuCDgame(cd, n);
    XuatNhieuCDgame(cd, n);
    return 0;
}