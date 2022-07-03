                                                   //....Rock|Paper|Scissor....//

#include <stdio.h>
#include <stdlib.h> // Including Stdlib header File to include Function rand() and srand();
#include <time.h>   // Including Time header File to time as Random Number.
int randg();        // Random Number Generator.
int main()
{
    int rand,youwin = 1; // Needed Variable
    char comp, player[1];

    printf("\n\n \t\t\t\t\t\t  ROCK|PAPER|SCISSOR\n");
    // printf("\t\t\t\t\t  \t\t *******\n\n");
    printf("\t\t\t\t\t\t--WELCOME TO THE GAME--\n");

    // do-while loop till player choose Exit Option.
    while ((youwin != 0))
    {

        rand = randg(); // Putting Random number in variable rand.

        /* Assigning Alphabet in Computer's Option*/

        if (rand >= 1 && rand <= 4)
        {
            comp = 'r';
        }

        else if (rand >= 5 && rand <= 7)
        {
            comp = 'p';
        }

        else
        {
            comp = 's';
        }
        printf("\n");

        printf("\nInput an appropriate Alplabet to Choose Option : \n");

        /* Option for player[0] to select Rock/Paper/scissor*/

        printf(" 'R' for choose 'Rock'.\n");
        printf(" 'P' for choose 'Paper'.\n");
        printf(" 'S' for choose 'Scissor'.\n");
        printf(" '0' for Exit of Programm.");

        gets(player);

        if (player[0] == '0')
        {
            printf("\n\n GoodBye! Come again to Play");
            return (0);
        }
        printf("\n");

        /* Conditions based on user Inupt among 'r' 'p' 's' */
        if (comp == 'r' && (player[0] == 'R' || player[0] == 'r'))
        {
            printf("Draw!");
        }

        else if (comp == 'r' && (player[0] == 'P' || player[0] == 'p'))
        {
            printf("You Win!");
            youwin = 0;
        }

        else if (comp == 'r' && (player[0] == 'S' || player[0] == 's'))
        {
            printf("Machine Wins! ;)");
        }

        else if (comp == 'p' && (player[0] == 'R' || player[0] == 'r'))
        {
            printf("Machine Wins! ;)");
        }

        else if (comp == 'p' && (player[0] == 'P' || player[0] == 'p'))
        {
            printf("Draw!");
        }

        else if (comp == 'p' && (player[0] == 'S' || player[0] == 's'))
        {
            printf("You Win!");
            youwin = 0;
        }

        else if (comp == 's' && (player[0] == 'R' || player[0] == 'r'))
        {
            printf("You Win!");
            youwin = 0;
        }

        else if (comp == 's' && (player[0] == 'P' || player[0] == 'p'))
        {
            printf("Machine Wins! ;)");
        }

        else if (comp == 's' && (player[0] == 'S' || player[0] == 's'))
        {
            printf("Draw!");
        }

        {
            /* Mesage for what Machine choose */
            if (comp == 'r' && (player[0] == 'r' || player[0] == 'R'))
            {
                printf(" Machine also choose Rock :o ");
            }

            else if (comp == 'p' && (player[0] == 'p' || player[0] == 'P'))
            {
                printf(" Machine also choose Paper :o ");
            }

            else if (comp == 's' && (player[0] == 's' || player[0] == 'S'))
            {
                printf(" Machine also choose Scissor :o ");
            }

            else if (comp == 'r')
            {
                printf(" Machine choose Rock");
            }

            else if (comp == 'p')
            {
                printf(" Machine choose Paper");
            }

            else if (comp == 's')
            {
                printf(" Machine choose Scissor");
            }
        }
    }

    printf("\n\n GoodBye! Come again to Play");

    return 0;
}

int randg()
{
    int num;
    srand(time(0));
    num = rand()%10 + 1;

    return (num);
}