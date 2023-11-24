#include<stdio.h>
#include<string.h>
struct sinhvien 
{
    int masv;
	 char tensv[50];
	 char lop[50];
	 float diemtoan;
	 float diemvan;
	 float diemanh;	
};
void nhap(struct sinhvien sv[],int n){
	for(int i=0;i<n;i++)
	{
    printf("Sinh Vien thu %d ", i);
    printf("\n Nhap ma so sinh vien:");
	scanf("%d",&sv[i].masv);
	printf("\n Nhap Ten SV: ");
	fpurge(stdin);
	 gets(sv[i].tensv);
	 printf("\n Nhap Lop :");
	 gets(sv[i].lop);
	 fpurge(stdin);
	 printf("\n nhap diem mon toan :");
	 scanf("%f",&sv[i].diemtoan);
	 printf("\n nhap diem mon van :");
	 scanf("%f",&sv[i].diemvan);
	 printf("\n nhap diem mon anh van:");
	 scanf("%f",&sv[i].diemanh);
	 } 
}
void sapXep(struct sinhvien sv[], int n) {
    for(int i = 0; i < n - 1; i ++) {
        for(int j = i + 1; j < n; j ++) {
            if(strcmp(sv[i].tensv, sv[j].tensv) > 0)
            {
                struct sinhvien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
}

void xuat(struct sinhvien sv[], int n){
	printf("MaSV\t TenSV\t Lop\t Toan\t Van\t Anh\t DTB\n");
	for (int i=0;i<n;i++)	
	{printf("\n"); 
	printf("%d\t %s\t %s\t %0.2f\t %0.2f\t %0.2f\t %0.2f\n",sv[i].masv, sv[i].tensv, sv[i].lop, sv[i].diemtoan, sv[i].diemvan, sv[i].diemanh, (sv[i].diemtoan+sv[i].diemvan+sv[i].diemanh)/3);
	}
}
void xoa1SV(struct sinhvien sv[], int n) {
    int ma;
    scanf("%d", &ma);
    for(int i = 0; i < n; i ++) {
        if(sv[i].masv == ma) {
            sv[i] = sv[i + 1];
            n --;
        }
    }
    xuat(sv, n);
}
void them1SV(struct sinhvien sv[], int n) {
    n ++;
    for(int i = 0; i < n; i ++) {
    printf("Sinh Vien thu %d ", i);
    printf("\n Nhap ma so sinh vien:");
	scanf("%d",&sv[i].masv);
	printf("\n Nhap Ten SV: ");
	fpurge(stdin);
	gets(sv[i].tensv);
	printf("\n Nhap Lop :");
	gets(sv[i].lop);
	fpurge(stdin);
	printf("\n nhap diem mon toan :");
	scanf("%f",&sv[i].diemtoan);
	printf("\n nhap diem mon van :");
	scanf("%f",&sv[i].diemvan);
	printf("\n nhap diem mon anh van:");
	scanf("%f",&sv[i].diemanh); 
}
    printf("luc sau");
    xuat(sv, n);
}
int main(){
	struct sinhvien sv[100];
	int n;
	do{
		printf("nhap so sv:");
		scanf("%d",&n);
		if(n<1||n>100){
			printf("nhap lai");
		}
	} while (n<1||n>100);
    nhap(sv, n);
    xuat(sv, n);
    them1SV(sv, n);
}