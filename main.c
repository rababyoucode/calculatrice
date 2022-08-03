#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 , num2 ;
    char operation , quitte;


    do {
    printf("entrer le 1er nombre\n");
    scanf("%f",&num1);
    printf("entrer le 2eme nombre\n");
    scanf("%f",&num2);

    printf("*****\n");

    printf("veuillez choisir l'operation\n");
    printf("pour l'addition choisir +\n");
    printf("pour choisir l'operation de division saisir /\n");
    printf("pour choisir l'operation de multiplication saisir *\n");
    printf("pour choisir soustraction saisir -\n");
    printf("*****\n");
    scanf("%s", &operation);



    switch (operation){

                     case '+':
                          printf("LE RESULTAT EST %f", num1 + num2);
                            break;
                     case '/' : if (num2 != 0 ){

                         printf("LE RESULTAT EST %f", num1 / num2);
                         }
                         else
                            printf("Veuillez choisir un num 2 différent de 0");
                            break;

                     case '*' : printf("LE RESULTAT EST %f", num1 * num2);
                            break;
                     case '-' : printf("LE RESULTAT EST %f", num1 - num2);
                            break;

                     default  : printf("votre choix est introuvable");

                     }
} while (quitte == 'q' );
    return 0;
}
