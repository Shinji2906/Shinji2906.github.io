#include <bits/stdc++.h>

using namespace std;

void nhapMang(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("gia tri cho phan tu [%d]: ", i + 1);
        cin >> array[i];
    }
}

void xuatMang(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\n\n\n\nGia tri cua phan tu [%d]: %d\n", i + 1, array[i]);
    }
}




int main() {
    int size;
    cout << "Nhap so luong: "; cin >> size;

    int arr[size];
    nhapMang(arr, size);
    xuatMang(arr, size);

    return 0;
}