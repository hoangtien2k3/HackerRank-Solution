
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

// Yeu cau 1:
void TimTatCaCacUocSo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d  ", i);
        }
    }
}

int TimUocSoChan(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(n % i) && !(i % 2))
        {
            count++;
        }
    }
    return count;
}

// Yeu cau 2:
struct SuaDongHop
{
    char nhan[50];
    float trongLuong;
    double giaBan;
};

void NhapThongTin(SuaDongHop &sdh, int n)
{
    printf("\n\t+ Nhap vao Nhan Sua Hop: ");
    scanf("%s", sdh.nhan);
    printf("\t+ Nhap vao Trong Luong Sua Hop: ");
    scanf("%d", &sdh.trongLuong);
    printf("\t+ Nhap vao Gia Ban Sua Hop: ");
    scanf("%d", &sdh.giaBan);
}

void NhapThongTin_SuaDongHop(SuaDongHop sdh[50], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n__________________________________________\n");
        printf("\n- Nhap vao thong tin Sua Hop Thu %d : ", i + 1);
        NhapThongTin(sdh[i], n);
        printf("\n__________________________________________\n");
    }
}

void In_Thong_Tin_Sua_Dong_Hop(SuaDongHop sdh[50], int n)
{
    printf("\n__________________________________________\n");
    printf("\n\t--- KET QUA CAU NHIEM VU 2 ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t\n- THONG TIN SUA DONG HOP THU %d", i + 1);
        printf("\n\t+ Nhan: %s", sdh[i].nhan);
        printf("\n\t+ Trong Luong: %d", sdh[i].trongLuong);
        printf("\n\t+ Gia Ban: %d", sdh[i].giaBan);
        printf("\n");
    }
    printf("\n__________________________________________\n");
}

int main()
{
    while (true)
    {
        printf("\n\n________________MENU______________________\n");
        printf("*****************************************\n");
        printf("*   R1. Thuc Hien Nhiem Vu Cua R1:      *\n");
        printf("*   R2. Thuc Hien Nhiem Vu Cua R2:      *\n");
        printf("*   R3. Ket Thuc Chuong Trinh !!!       *\n");
        printf("*****************************************");
        printf("\n__________________________________________\n");

        int lc;
        do
        {
            printf("\n==> Nhap Vao Lua Chon: ");
            scanf("%d", &lc);
        } while ((lc < 0 || lc > 3) && printf("\n==> Nhap Sai, Vui Long Nhap Lai Lua Chon !!!"));

        switch(lc) {
            case 1:
            {
                int k;
                printf("\n  ===> Thuc Hien Nhiem Vu Cua R1 <===  ");
                printf("\n\t- Nhap Vao So Nguyen K: ");
                scanf("%d", &k);
                printf("________________________________________\n");
                printf("\n\t--- KET QUA CAU NHIEM VU 1 ---\n");
                printf("+ So Uoc Cua K:   ");
                TimTatCaCacUocSo(k);
                printf("\n");
                printf("+ So Uoc Chan:   %d", TimUocSoChan(k));
                printf("\n________________________________________\n");
                break;
            }
            case 2:
            {
                SuaDongHop sdh[50];
                int soLuong;
                printf("\n- Nhap Vao So Luong Sua Dong Hop: ");
                scanf("%d", &soLuong);
                NhapThongTin_SuaDongHop(sdh, soLuong);
                In_Thong_Tin_Sua_Dong_Hop(sdh, soLuong);
                break;
            }
            case 3:
            {   
                printf("\n---> CHUONG TRINH DA KET THUC <---\n\n\n");
                return 0;
            }

        }

        char c; 
        printf("\n==> Nhan Enter de tiep tuc chuong trinh !!!: "); c = getch();

    }

    getch();
    return 0;
}
