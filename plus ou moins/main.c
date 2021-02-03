#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{

        int nombreMystere = 0, nombreEntre = 0, coups = 0, continuerPartie = 1, MAX = 0, MIN = 1, niveau = 1;
        srand(time(NULL));
        printf("****************************************************\n");
        printf("*---------------Jeu du Plus ou Moins---------------*\n");
        printf("****************************************************\n");


            do
            {
                printf("Choisissez votre niveau de difficulte\n");
                printf("1. 0 a 100\t");
                printf("2. 0 a 1000\t");
                printf("3. 0 a 10000\t");
                scanf("%d", &niveau);

              switch(niveau)
               {
               case 1:
                MAX = 100;
                break;
               case 2:
                MAX = 1000;
                break;
               case 3:
                MAX = 10000;
                break;
               }
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
            coups = 0;

                do
                {

                printf("\nQuel est le nombre ?\t");
                scanf("%d", &nombreEntre);
                printf("\n");
                coups++;

                if ( nombreEntre < nombreMystere)

                printf("C'est plus !\n");


                else if (nombreEntre > nombreMystere)

                printf("C'est moins !\n");


                else
                printf("Let's Go Ma Men !! Tu a trouve en %d coups !\n\n", coups);



                } while (nombreEntre != nombreMystere);

            printf("Voulez-vous continuer la partie ?\n\n");
            printf("Entrer 1 pour continuer ou 0 pour arreter\t");
            scanf("%d", &continuerPartie);
            printf("\n");

            } while ( continuerPartie == 1);

return 0;

}
