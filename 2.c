#include<stdio.h>
#include<string.h>
struct sinhvien {
    char maNhanVien[5];
    char tenNhanVien[30];
    float luongNhanVien;
};
void nhap(struct sinhvien sv[], int n) {
    for(int i = 0; i < n; i ++) 
    {
        fpurge(stdin);
        gets(sv[i].tenNhanVien);
        gets(sv[i].maNhanVien);
        fpurge(stdin); 
        scanf("%f", &sv[i].luongNhanVien);
        
    }
}
void xuatMang(struct sinhvien sv[], int n) {
    for(int i = 0; i < n; i ++) {
        printf("ma nhan vien,  ten nhan vien,   luong nhan vien\n");
        printf("ma nhan vien: %s\n ten nhan vien :%s\n   luong nhan vien :%f\n", sv[i].maNhanVien, sv[i].tenNhanVien, sv[i].luongNhanVien);
    }
}
void timNhanVien(struct sinhvien sv[], int n) {
    char maNV;
    printf("Ma nv: ");
    scanf("%s", &maNV);
    for(int i = 0; i < n; i ++) {
        if(strcmp(sv[i].maNhanVien, &maNV)) {
        printf("ma nhan vien:%s\n  ten nhan vien:%s\n  luong nhan vien: %f\n", sv[i].maNhanVien, sv[i].tenNhanVien, sv[i].luongNhanVien);
        break;
        }
    }
}
int main() {
    struct sinhvien sv[100];
    int n;
    scanf("%d", &n);
    nhap(sv, n);
    xuatMang(sv, n);
    timNhanVien(sv, n);
    return 0;
}
