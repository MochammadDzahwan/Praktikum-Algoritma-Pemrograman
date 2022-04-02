/* Nama File : NBArray.c */
/* Nama : Mochammad Dzahwan Fadhloly */
/* NIM : 24060121140168 */
/* Lab : B1 */
/* Deskripsi : menghitung besarnya penjumlahan sub array/tabel T */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int N,i,j,NBArray;

    /*Algoritma*/
    printf("Masukkan panjang Array : ");
    scanf("%d",&N);

    if(N<=0)
    {
        printf("Masukan harus positif");
    }
    else
    {
        int T[N];
        for(i=0;i<N;i++)
        {
            printf("Data ke %d : ", i+1);
            scanf("%d",&T[i]);
        }

        NBArray = 0;
        for(i=0;i<N;i++)
        {
            for(j=i;j<N;j++)
            {
                NBArray = NBArray + T[j];
            }
        }
        printf("Total Jumlah : %d", NBArray);
    }

    return 0;
}
