#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100


typedef struct NGAYTHANG
{
    int ngay, thang, nam;
}nt;

struct SINHVIEN
{
    char mssv[MAX];
    char name[MAX];
    struct NGAYTHANG ngaySinh;
    char gioitinh[MAX];
    char diachi[MAX];
    float diem;
};

void ngayThang(nt &nsv) {
    printf("Nhap ngay: ");
    scanf("%d", &nsv.ngay);

    printf("Nhap thang: ");
    scanf("%d", &nsv.thang);

    printf("Nhap nam: ");
    scanf("%d", &nsv.nam);
    getchar();
}

void nhapN(int &n) {
    do {
        printf("Nhap so luong sv muon tao: ");
        scanf("%d", &n);
        getchar();
        if (n < 0) {
            printf("Khong hop le");
        } else {
            break;
        }
    } while(1);
}
void nhapSV(struct SINHVIEN &sv) {
    printf("\nNhap ho va ten: ");
    fgets(sv.name, MAX, stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Nhap MSSV: ");
    scanf("%s", sv.mssv);
    getchar();

    printf("Nhap ngay sinh: ");
    ngayThang(sv.ngaySinh);

    printf("Nhap gioi tinh: ");
    scanf("%s", sv.gioitinh);
    getchar();

    printf("Nhap dia chi: ");
    fgets(sv.diachi, MAX, stdin);
    sv.diachi[strcspn(sv.diachi, "\n")] = '\0';


    printf("Nhap diem thi: ");
    scanf("%f", &sv.diem);
    getchar();
}

void xuatSV(struct SINHVIEN sv) {
    printf("Ho va ten: %s", sv.name);
    printf("\nMSSV: %s\n", sv.mssv);
    printf("Ngay Sinh: %d/%d/%d", sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam);
    printf("\nGioi tinh: %s\n", sv.gioitinh);
    printf("Dia chi: %s\n", sv.diachi);
    printf("Diem thi: %.2f", sv.diem);
}
void SapXep (struct SINHVIEN *sv, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(sv[i].diem > sv[j].diem) {
                struct SINHVIEN temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    nhapN(n);
    struct SINHVIEN dssv[MAX];
    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu [%d]: ", i + 1);
        nhapSV(dssv[i]);
    }
    printf("\n\n\nDanh sach sinh vien:\n");
    for(int i = 0;i < n; i++) {
        printf("\nThong tin sinh vien thu [%d]\n", i + 1);
        xuatSV(dssv[i]);
    }
    SapXep(dssv, n);
    printf("\nDanh sach sv da sap xep:\n");
    for(int i = 0;i < n; i++) {
        printf("\nThong tin sinh vien thu [%d]\n", i + 1);
        xuatSV(dssv[i]);
    }
}