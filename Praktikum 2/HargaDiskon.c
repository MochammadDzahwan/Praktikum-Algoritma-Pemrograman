/* Nama File 	: HargaDiskon.c */
/* Deskripsi 	: Menghitung harga barang setelah diskon */
/* Nama       	: Mochammad Dzahwan Fadhloly */
/* NIM      	: 24060121140168 */


#include <stdio.h>

int main() {
    /* Kamus */
    int harga;
    char jenis;

    /* Algoritma */
    printf("Masukkan jenis barang (A/B/C): ");
    scanf("%c", &jenis);
    printf("Masukkan harga barang: Rp");
    scanf("%d", &harga);

    if(jenis=='A')
    {
      if((harga>200)&&(harga<10000))
      {
          printf("Harga barang %c adalah %d rupiah", jenis, harga-(harga*10/100));
      }
      else
      {
          printf("Harga barang %c adalah %d rupiah", jenis, harga);
      }
    }
    else if(jenis=='B')
    {
      if((harga>200)&&(harga<10000))
      {
          printf("Harga barang %c adalah %d rupiah", jenis, harga-(harga*15/100));
      }
      else
      {
          printf("Harga barang %c adalah %d rupiah", jenis, harga);
      }
    }
    else if(jenis=='C')
    {
      if((harga>200)&&(harga<10000))
      {
          printf("Harga barang %c adalah %d rupiah", jenis, harga-(harga*20/100));
      }
      else
      {
          printf("Harga barang %c adalah %d rupiah", jenis, harga);
      }
    }

    return 0;
}
