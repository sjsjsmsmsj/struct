#include<stdio.h>
#include<math.h>
struct phanSo 
{
    float tuSo, mauSo;
} ;
void nhapAB(struct phanSo pS) {
    scanf("%f%f", &pS.tuSo, &pS.mauSo);
}
void congAB(struct phanSo a, struct phanSo b) {
    struct phanSo c;
    c.tuSo = a.tuSo * b.mauSo + a.mauSo * b.tuSo;
    c.mauSo = a.mauSo * b.mauSo;
    printf("cong: %f\n", 1.0 * c.tuSo / c.mauSo);
}
void truAB(struct phanSo a, struct phanSo b) {
    struct phanSo c;
    c.tuSo = a.tuSo * b.mauSo - b.tuSo * a.mauSo;
    c.mauSo = a.mauSo * b.mauSo;
    printf("tru: %f\n", 1.0 * c.tuSo / c.mauSo);
}
void nhanAB(struct phanSo a, struct phanSo b) {
    struct phanSo c;
    c.tuSo = a.tuSo * b.tuSo;
    c.mauSo = a.mauSo * b.mauSo;
    printf("nhan: %f\n", c.tuSo / c.mauSo);
}
void chiaAB(struct phanSo a, struct phanSo b) {
    struct phanSo c;
    c.tuSo = a.tuSo * b.mauSo;
    c.mauSo = a.mauSo * b.tuSo;
    printf("chia: %f\n", c.tuSo / c.mauSo);
}
int uSCLN(int a, int b) {
    while(a != b) {
        if(a > b) 
            a = a - b;
        else    
            b -= a;
    }
    return a;
}

void phanSoToiGian(struct phanSo a) {
    struct phanSo c; 
    struct phanSo d;
    d.tuSo = a.tuSo;
    d.mauSo = a.mauSo;
    c.tuSo = a.tuSo / uSCLN(a.tuSo, a.mauSo);
    c.mauSo = a.mauSo / uSCLN(a.tuSo, a.mauSo);
    if(c.tuSo == d.tuSo && c.mauSo == d.mauSo)
        printf("Phan so da toi gian \n");
    else 
        printf("Phan so khong toi gian\n"); 
}

void phanSoToiGian1(struct phanSo a) {
    struct phanSo c;
    c.tuSo = a.tuSo / uSCLN(a.tuSo, a.mauSo);
    c.mauSo = a.tuSo / uSCLN(a.tuSo, a.mauSo);
    printf("%f\n", c.tuSo / c.mauSo);
}
int main() {
    struct phanSo a;
    struct phanSo b;
    printf("Nhap phan so a: ");
    scanf("%f%f", &a.tuSo, &a.mauSo);
    printf("NHap phan so b: ");
    scanf("%f%f", &b.tuSo, &b.mauSo);
    congAB(a, b);
    truAB(a, b);
    phanSoToiGian(a);
}