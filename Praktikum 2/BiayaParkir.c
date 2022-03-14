/* Nama File 	: BiayaParkir.c */
/* Deskripsi 	: Menghitung biaya parkir dari lamanya waktu parkir */
/* Nama       	: Mochammad Dzahwan Fadhloly */
/* NIM      	: 24060121140168 */

#include <stdio.h>

int main() {
    /* Kamus */
    int biaya;
    int jam;

    /* Algoritma */
    printf("Masukkan lamanya waktu parkir (dalam jam): ");
    scanf("%d", &jam);

    if(jam<=0)
    {
        printf("Lamanya waktu parkir tidak boleh negatif");
    }
    else
    {
        if(jam<=2)
        {
            biaya = 2000;
        }
        else
        {
            biaya = ((jam-2)*500) + 2000;
        }
    }
    printf("Besarnya biaya parkir adalah %d rupiah", biaya);

    return 0;
}
