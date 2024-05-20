#include <stdio.h>
#define CRVENA 176
#define SIVA 177
#define BIJELA 178
#define CRNA 219

void ispuni_matricu(int matrica[8][10])
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j < 5)
            {
                matrica[i][j] = CRNA;
            }
            if(j > 4)
            {
                matrica[i][j] = CRVENA;
            }

            if(i < 4 && i < j && ((i+j) < 9))
            {
                matrica[i][j] = BIJELA;

            }

            if(i > 3 && i+1 >= j && ((i+j) >= 8))
            {
                matrica[i][j] = SIVA;

            }
        }
    }
}

void ispis_matrice(int matrica[8][10])
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%c", matrica[i][j]);

        }
        printf("\n");
    }
}



void zamjeni_element(int matrica[8][10], int broj)
{
    int zamjena;

    if(broj == 1)
    {

        matrica[1][4] = CRNA;
        matrica[1][5] = CRVENA;
    }

    if(broj == 2)
    {

        matrica[3][1] = BIJELA;
        matrica[4][1] = SIVA;
    }

    if(broj == 3)
    {

        matrica[4][8] = SIVA;
        matrica[3][8] = BIJELA;
    }

    if(broj == 4)
    {


        matrica[6][4] = CRNA;
        matrica[6][5] = CRVENA;

    }
}


void suma(int matrica[8][10])
{
    int sumaA = 0;
    int sumaB = 0;
    int sumaC = 0;
    int sumaD = 0;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; i < 10; j++)
        {
            if(i > 4 && j < 5)
            {
                sumaA += matrica[i][j];
            }
            if(i > 4 && j > 4)
            {
                sumaB += matrica[i][j];
            }
            if(i < 3 && j < 5)
            {
                sumaC += matrica[i][j];
            }
            if(i < 3 && j > 4)
            {
                sumaD += matrica[i][j];
            }
        }
    }

    printf("Prva cetvrtina: %c", sumaA);
    printf("Druga cetvrtina: %c", sumaB);
    printf("Treca cetvrtina: %c", sumaC);
    printf("Cetvrta cetvrtina: %c", sumaD);
}

int main()
{
    int sat[8][10];


    ispuni_matricu(sat);
    ispis_matrice(sat);
    printf("\n\n");
    zamjeni_element(sat, 1);
    zamjeni_element(sat, 2);
    zamjeni_element(sat, 3);
    zamjeni_element(sat, 4);
    ispis_matrice(sat);
    suma(sat);



    return 0;
}
