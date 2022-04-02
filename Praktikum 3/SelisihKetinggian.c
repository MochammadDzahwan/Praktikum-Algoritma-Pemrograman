/* Nama File : SelisihKetinggian.c */
/* Nama : Mochammad Dzahwan Fadhloly */
/* NIM : 24060121140168 */
/* Lab : B1 */
/* Deskripsi : Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int N, i, jarak, terKecil, terBesar;

    /*Algoritma*/
    printf("Masukkan panjang array : ");
    scanf("%d", &N);

    if (N<=0)
    {
        printf("Masukan harus positif");
    }
    else
    {
        int T[N];
        for (i=0; i<N; i++)
        {
            printf("Jalur %d : ", i+1);
            scanf("%d",&T[i]);
        }

        terKecil=T[0];
        terBesar=T[0];
        for(i=0;i<N;i++)
        {
            if(T[i] > terBesar)
            {
                terBesar = T[i];
            }
            else if(T[i] < terKecil)
            {
                terKecil = T[i];
            }
        }
        jarak = terBesar - terKecil;
    }
    printf("Maka Selisih lintasan : %d", jarak);

    return 0;
}
