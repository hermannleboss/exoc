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

void printWeightUnit(unit)
{
    switch (unit)
    {
    case 1:
        printf("kg");
        break;

    case 2:
        printf("hg");
        break;

    case 3:
        printf("dag");
        break;


    case 4:
        printf("g");
        break;

    case 5:
        printf("dg");
        break;

    case 6:
        printf("cg");
        break;

    case 7:
        printf("mg");
        break;
    }
}

void printDistanceUnit(unit)
{
    switch (unit)
    {
    case 1:
        printf("km");
        break;

    case 2:
        printf("hm");
        break;

    case 3:
        printf("dam");
        break;


    case 4:
        printf("m");
        break;

    case 5:
        printf("dm");
        break;

    case 6:
        printf("cm");
        break;

    case 7:
        printf("mm");
        break;
    }
}

void convertisseurDistance()
{

    double height, heightInM;
    int unit;
    //Sasie de la valeur
    printf("Entrez le valeur de la distance \n");
    scanf("%lf", &height);

    printf("La valeur de la distance  est %f\n", height);

    //Sasie de l'unité

    //Demande de saisie + controlle de l'entré
    do
    {
        printf("Quel est l'unité de votre distance ?");
        printf("Liste des unites: \n"
               "1 = Le kilomètre (km) est égal à 1 000 mètres.\n"
               "2 = L'hectomètre (hm) est égal à 100 mètres.\n"
               "3 = Le décamètre (dam) est égal à 10 mètres.\n"
               "4 = Le mètre (m) est égal à 1 mètre.\n"
               "5 = Le décimètre (dm) est égal à 0,1 mètre.\n"
               "6 = Le centimètre (cm) est égal à 0,01 mètre.\n"
               "7 = Le millimètre (mm) est égal à 0,001 mètre.\n"
              );
        scanf("%i", &unit);
        if(unit<=0 || unit >=8)
        {
            printf("Le type de l'unité doit être compris entre 1 et 7");
        }

    }
    while(unit<=0 || unit >=8);

    //Convertion vers le kilograme
    heightInM=height*pow(10, (1-unit));

    printf("Tableau de convertion\n"
           "La distance entré est de %f "
           , height);
    printDistanceUnit(unit);

    printf("Equivaut a \n");
    printf("%f km\n",  heightInM);
    printf("%f hm\n",  heightInM*10);
    printf("%f dam\n",  heightInM*100);
    printf("%f m\n",  heightInM*1000);
    printf("%f dm\n",  heightInM*10000);
    printf("%f cm\n",  heightInM*100000);
    printf("%f mm\n",  heightInM*1000000);
}

void convertisseurPoid()
{
    double weight, weightInKg;
    int unit;
    //Sasie de la valeur
    printf("Entrez le valeur du poid \n");
    scanf("%lf", &weight);

    printf("La valeur du poid  est %f\n", weight);

    //Sasie de l'unité

    //Demande de saisie + controlle de l'entré
    do
    {
        printf("Quel est l'unité de votre poid ?");
        printf("Liste des unites: \n"
               "1 = Le kilogramme (kg) est égal à 1 000 grammes.\n"
               "2 = L'hectogramme (hg) est égal à 100 grammes.\n"
               "3 = Le décagramme (dag) est égal à 10 grammes.\n"
               "4 = Le décagramme (g) est égal à 1 grammes.\n"
               "5 = Le décigramme (dg) est égal à 0,1 gramme.\n"
               "6 = Le centigramme (cg) est égal à 0,01 gramme.\n"
               "7 = Le milligramme (mg) est égal à 0,001 gramme.\n"
              );
        scanf("%i", &unit);
        if(unit<=0 || unit >=8)
        {
            printf("Le type de l'unité doit être compris entre 1 et 7");
        }

    }
    while(unit<=0 || unit >=8);

    //Convertion vers le kilograme
    weightInKg=weight*pow(10, (1-unit));

    printf("Tableau de convertion\n"
           "La masse entré est de %f "
           , weight);
    printWeightUnit(unit);

    printf("Equivaut a \n");
    printf("%f kg\n",  weightInKg);
    printf("%f hg\n",  weightInKg*10);
    printf("%f dag\n",  weightInKg*100);
    printf("%f g\n",  weightInKg*1000);
    printf("%f dg\n",  weightInKg*10000);
    printf("%f cg\n",  weightInKg*100000);
    printf("%f mg\n",  weightInKg*1000000);
}

int main()
{
    int rep;

    do
    {

        //Message de bienvenu
        printMax("Bienvenue dans le convertisseur basic\n");


        //Presentation du fonctionnemnt
        printMoy("Présentation du fonctionnement\n");

        printf("Ce programme est un convertisseur de masse et de longeur\n\n"
               "Elle prend en entré la valeur de la distance ou de la masse ainsi que l'unité.\n"
               "Elle présente ensuite un tableau de convertion de valeurs\n"
              );
        //recuperation des données

        printMin("Debut des operations\n");

        //Operation
        int operationType;
        do
        {
            printMin("Choix du type d'operation\n");
            printf("Choisiez un type d'opération \n"
                   "1: Convertisseur de poid\n"
                   "2: Convertisseur de distance\n"
                  );
            scanf("%i", &operationType);
            if (operationType!=1 && operationType!=2)
            {
                printf("Le choix doit être 1 ou deux");
            }

        }
        while(operationType!=1 && operationType!=2);

        if(operationType==1)
        {
            convertisseurPoid();
        }
        else
        {
            convertisseurDistance();
        }

        printf("voulez vous continuer ? \n 1 : Oui ? Saisisez 1 pour continuer \n 2 : Non ? Saisisez 2 pour continuer\n");
        scanf("%i", &rep);

    }
    while(rep==1);

    return 0;
}


