/* Nama File 	: UpahKerja.c */
/* Deskripsi 	: Menghitung upah kerja berdasarkan jam dan golongan */
/* Nama       	: Mochammad Dzahwan Fadhloly */
/* NIM      	: 24060121140168 */

#include <stdio.h>
/*Program Utama*/
int main() {
    /*Kamus*/
    int gol;
    int jam;
    int upah;

    /*Algoritma*/
    printf("Masukkan golongan kerja (1-4): ");
    scanf("%d", &gol);
    printf("Masukkan lama jam kerja: ");
    scanf("%d", &jam);

    if(gol==1)
    {
        if(jam<40)
        {
            upah = 1000*jam;
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
        else
        {
            upah = (40*1000) + (jam-40)*(1.5*1000);
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
    }
    else if(gol==2)
    {
        if(jam<40)
        {
            upah = 1500*jam;
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
        else
        {
            upah = (40*1500) + (jam-40)*(1.5*1500);
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
    }
    else if(gol==3)
    {
        if(jam<40)
        {
            upah = 2000*jam;
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
        else
        {
            upah = (40*2000) + (jam-40)*(1.5*2000);
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
    }
    else if(gol==4)
    {
        if(jam<40)
        {
            upah = 2500*jam;
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
        else
        {
            upah = (40*2500) + (jam-40)*(1.5*2500);
            printf("Upah golongan %d adalah Rp%d", gol, upah);
        }
    }
    else
    {
        printf("Masukan golongan tidak sesuai");
    }

    return 0;
}
