/* Nama File 	: TunjAnak.c */
/* Deskripsi 	: Menghitung besar tunjangan anak */
/* Nama       	: Mochammad Dzahwan Fadhloly */
/* NIM      	: 24060121140168 */

#include <stdio.h>

int main() {
    /*Kamus*/
    int gaji;
    int anak;
    int tunj;

    /* Algoritma */
    printf("Masukkan jumlah anak: ");
    scanf("%d", &anak);
    printf("Masukkan besar gaji pokok: ");
    scanf("%d", &gaji);

    if(anak>=0&&anak<=3)
    {
        tunj = anak*(0.1*gaji);
    }
    else
    {
        tunj = 3*(0.1*gaji);
    }
    printf("Besar tunjangan anak ialah Rp.%d", tunj);

    return 0;
}
