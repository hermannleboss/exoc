#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printMax(string)
{
    printf("______________________________________________________________________________________________________\n");
    printf(string);
    printf("______________________________________________________________________________________________________\n\n");
}

void printMoy(string)
{
    printf("____________________________________________________________________________\n");
    printf(string);
    printf("____________________________________________________________________________\n\n");
}

void printMin(string)
{
    printf("__________________________________________________________\n");
    printf(string);
    printf("__________________________________________________________\n\n");
}
int main()
{

    //return 0;
    double a, b;
    double res = 0.;
    char op=0;
    int rep;

    do
    {

        //Message de bienvenu
        printMax("Bienvenue dans la calculatrice basic\n");


        //Presentation du fonctionnemnt
        printMoy("Présentation du fonctionnement\n");

        printf("Ce programme est un calculatrice standard.\n\n"
               "Elle vous demande de saisire deux valeurs réel et une opération (Chaine de caractère)"
               "ensuite elle fait des operations sur les donnes saisies en entrée.\n"
               "Les opérations gerer sont : \n"
               "\tAddition : +\n"
               "\tSoustraction : - \n"
               "\tDivision : /\n"
               "\tMultiplication : *\n"
              );
        //recuperation des données

        printMin("Debut des operations\n");
        printf("Saisisez la valeur du premier nombre A\n");

        //TODO: Controlle de la saisie
        scanf("%lf", &a);


        printf("Saisisez la valeur du deuxième nombre B\n");
        scanf("%lf", &b);

        //Affichage des différentes opération possible

        printf("choisiez votre operation\n");


        fflush(stdin);
        scanf("%c", &op);

        //Operation

        switch (op)
        {
        case '+':
            res = a + b;
            break;

        case '-':
            res = a - b;
            break;

        case '*':
            res = a * b;
            break;

        case '/':
            res = a / b;
            break;
        }

        printf("Votre calcule est %f %c %f = %f\n", a, op, b, res);

        printf("voulez vous continuer ? \n 1 : Oui ? Saisisez 1 pour continuer \n 2 : Non ? Saisisez 2 pour continuer\n");
        scanf("%i", &rep);

    }
    while(rep==1);


    return 0;
}
