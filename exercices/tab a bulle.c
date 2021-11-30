/* Tri à bulle*/

#include <stdio.h>
#define SIZE 10

int main()
{
    printf("entrer un tableau de 40 valeurs")
    int i, j, tmp;

    //afficher les éléments du tableau
    for (i=0; i < SIZE; ++i)
    {
        printhf("%4d", tab[i]);
    }

    for (i=0 ; i < SIZE-1; i++)
    {
        for (j=0 ; j < SIZE-i-1; j++)
        {
            /* Pour un ordre décroissant utiliser < */
            if (tab[j] > tab[j+1])
            {
                tmp = tab[j];
                tab[j] = tab[j+1]
                tab[j+1] = tmp;
            }
        }
    }

    printf("\n******* tableau trié par ordre croissant *******\n");

    //afficher les éléments du tableau trié
    for (i=0; i < SIZE; ++i)
    {
        printf("%4d", tab[i]);
    }

    return 0;
}