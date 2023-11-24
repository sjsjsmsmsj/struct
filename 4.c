#include<stdio.h>
#include<math.h>

struct toaDo
{
    float x, y;
};

void nhap(struct toaDo a) {
    printf("Toa do nhap x, y: ");
    scanf("%f%f", &a.x, &a.y);
}
void Xuat(struct toaDo a) {
    printf("%f%f", a.x, a.y);
}

void khoangCach(struct toaDo a, struct toaDo b) {
    float distance = 1.0 * sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    printf("distance: %f\n", distance);
}

void tamGiac(struct toaDo a, struct toaDo b, struct toaDo c) {
    float AB = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    float AC = sqrt(pow(c.x - a.x, 2) + pow(c.y - a.y, 2));
    float BC = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
    if((AB + AC > BC) || (AB + BC > AC) || (BC + AC > AB))
        printf("Day la tam giac\n");
    else
        printf("Khong phai la tam giac\n");
}

void diemDoiXung(struct toaDo a, struct toaDo b) {
    struct toaDo c;
    c.x = 2 * b.x - a.x;
    c.y = 2*b.y - a.y;
    printf("xc = %f yc = %f\n", c.x, c.y);
}

int main() {
    struct toaDo a;
    struct toaDo b;
    struct toaDo c;
    nhap(a);
    nhap(b);
    nhap(c);
    tamGiac(a, b, c);
}