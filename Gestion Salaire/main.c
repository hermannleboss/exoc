#include <stdio.h>
#include <stdlib.h>

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

    int rep;
    int salaireBrute, salaireNet, heureSup;
    do
    {
        //Message de bienvenu
        printMax("Bienvenue dans le Gestionnaire de salaire basic\n");


        //Presentation du fonctionnemnt
        printMoy("Pr�sentation du fonctionnement\n");

        printf("Ce programme est gere les salaire des employ�s. On saisie le salaire brut,"
               " les heures supl�mentaire et avantage, le tout trait� puis on affiche le salaire net."
              );


        //recuperation des donn�es

        printMin("Debut des operations\n");

        printf("Saisisez le salaire brut : salaire de base\t");
        scanf("%i", &salaireBrute);
        printf("Saisisez les heures suplementaires\t");
        scanf("%i", &heureSup);

        int salaireBruteFinale, salaireNetFinale, salaireHoraire;

        //Calcule du salaire horaire
        salaireHoraire=salaireBrute/160;

        //Calcule du salaire net
        salaireNet= salaireBrute* (1- 17.5/100);

        //Calcule du salaire brute + les heure sup
        salaireBruteFinale=salaireBrute+salaireHoraire*heureSup;

        //Calcule du salaire net
        salaireNetFinale= salaireBruteFinale* (1- 17.5/100);

        printMin(" ");

        printf("\nSalaire brute : %d", salaireBrute);
        printf("\nSalaire horaire : %d", salaireBrute);
        printf("\nSalaire net = 82.5 pourcent du salaire brute: %d\n", salaireNet);


        printMin(" ");
        printf("\nHeure supl�mentaires : %d", heureSup);
        printf("\nSalaire brute Finale : Salaire brute normale = Salaire de base + salaire horaire * heures sup: %d", salaireBruteFinale);

        printf("\nSalaire net Finale= 82.5 pourcent du salaire brute final %d \n", salaireNetFinale);

        printMin(" ");




        printf("voulez vous continuer ? \n 1 : Oui ? Saisisez 1 pour continuer \n 2 : Non ? Saisisez 2 pour continuer\n");
        scanf("%i", &rep);

    }
    while(rep==1);

    return 0;
}
