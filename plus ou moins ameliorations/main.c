#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int nombreMystere = 0, nombreEntre = 0, MIN = 1, MAX = 0, continuerPartie = 1, difficulte = 0;

 do
 {
     printf("Choix de difficulte: 1. 0 a 10  2. 0 a 100  3. 0 a 1000... ");
    scanf("%d", &difficulte);

    switch(difficulte)
      {
          case 1: MAX = 10;
          break;

          case 2: MAX = 100;
          break;

          case 3: MAX = 1000;
          break;

      }

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    int coups = 0;


    do
    {

        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        coups++;

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\nVous avez trouver en %d coups\n\n", coups);

    } while (nombreEntre != nombreMystere);

    printf("Voulez-vous continuer ? Entrer 1 pour oui ou 0 pour non ");
    scanf("%d", &continuerPartie);
    printf("\n");
 } while (continuerPartie == 1);
    return 0;
}
