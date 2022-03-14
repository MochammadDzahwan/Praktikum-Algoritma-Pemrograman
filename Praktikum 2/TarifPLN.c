/* Nama File 	: TarifPLN.c */
/* Deskripsi 	: Menghitung besar tarif listrik */
/* Nama       	: Mochammad Dzahwan Fadhloly */
/* NIM      	: 24060121140168 */

int main() {
    /* Kamus */
    int gol;
    int daya;

    /* Algoritma */
    printf("Masukkan daya listrik: ");
    scanf("%d", &daya);
    printf("Masukkan golongan (1 atau 2): ");
    scanf("%d", &gol);

    if(daya<100)
    {
        if(gol==1)
        {
            printf("Tarif PLN Rp%d", 100*1000);
        }
        else if(gol==2)
        {
            printf("Tarif PLN Rp%d", 100*2000);
        }
        else
        {
            printf("Golongan tidak sesuai");
        }
    }
    else if("daya>=100&&daya<1000")
    {
        if(gol==1)
        {
            printf("Tarif PLN Rp%d", daya*1000);
        }
        else if(gol==2)
        {
            printf("Tarif PLN Rp%d", daya*2000);
        }
        else
        {
            printf("Golongan tidak sesuai");
        }
    }
    else
    {
        if(gol==1)
        {
            printf("Tarif PLN Rp%d", 1.1*daya*1000);
        }
        else if(gol==2)
        {
            printf("Tarif PLN Rp%d, 1.1*daya*2000");
        }
        else
        {
            printf("Golongan tidak sesuai");
        }
    }

    return 0;
}
