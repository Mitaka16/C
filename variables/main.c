#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{

    const int MAX = 3, MIN = 1;
    int nombreMystere = 0, nombreEntre = 0;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;





    do
    {
        printf("\nQuel est le nombre ?\t");
        scanf("%d", &nombreEntre);
        printf("\n");

        if ( nombreEntre < nombreMystere)
        {
        printf("C'est plus !\n");
        }

        else if (nombreEntre > nombreMystere)
        {
        printf("C'est moins !\n");
        }

        else
        printf("Let's Go Ma Men !!\n");


    } while (nombreEntre != nombreMystere);

return 0;



















}
