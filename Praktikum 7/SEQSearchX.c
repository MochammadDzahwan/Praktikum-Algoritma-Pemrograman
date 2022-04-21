/* Nama file : SEQSearchX.c */
/* Nama : Mochammad Dzahwan Fadhloly */
/* NIM : 24060121140168 */
/* Deskripsi : Mencari harga X pada Tabel T [1..N] secara sequential mulai dari T1.
 			   Hasilnya adalah indeks IX dimana Tix = X (i terkecil) */

#include <stdio.h>
#include <stdlib.h>
#include "searching.h"

void SEQSearchX1(int T[], int N, int *IX, int X)
{
	//Kamus Lokal
	int i;

	//Algoritma
	i = 0;
    while (i < N-1 && X != T[i])
	{
        i += 1;
    }
    if (T[i] == X)
	{
        *IX = i;
    }
	else
	{
        *IX = -1;
    }
}

int main()
{
	//Kamus Lokal
	int IX;
	int Tabel_T[] = {1,3,5,7,9,10,20,30,40,50,80,99,72};
	int X = 80;
	int N = sizeof(Tabel_T) / sizeof(Tabel_T[0]);

 	//Algoritma
 	printf("SEQSearchX1 :\n");
	SEQSearchX1(Tabel_T, N, &IX, X);
    if(IX == -1)
	{
    	printf("\nElemen tidak ditemukan\n");
    }
	else
	{
		printf("\nElemen berada pada index ke-%d\n", IX);
	}
	return 0;
}
