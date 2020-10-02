#include <stdio.h>

int main() {
    int mois,jour;
    printf("Vauillez entrer votre jour de naissance");
    scanf("%d",&jour);
    printf("Vauillez entrer votre mois de naissance");
    scanf("%d",&mois);
    /****************************bélier**********************************/
    if((jour>=21&&mois==3)||(jour<=20&&mois==4))
    {
        printf("Bélier");
    } else
        /**************************Taureau**************************************/
    if((jour>=21&&mois==4)||(jour<=20&&mois==5))
    {
        printf("Taureau");
    } else
        /**************************Gémeaux****************************************/
    if((jour>=21&&mois==5)||(jour<=21&&mois==6))
    {
        printf("Gémeaux");
    } else
        /***************************Cabcer*****************************************/
    if((jour>=22&&mois==6)||(jour<=22&&mois==7))
    {
        printf("Cancer");
    } else
        /********************Lion*******************************************/
    if((jour>=23&&mois==7)||(jour<=22&&mois==8))
    {
        printf("Lion");
    } else
        /**********Vierge****************************************************/
    if((jour>=23&&mois==8)||(jour<=22&&mois==9))
    {
        printf("Vierge");
    } else
        /**************************Balance***********************************/
    if((jour>=23&&mois==9)||(jour<=22&&mois==10))
    {
        printf("Balance");
    } else
        /***************************Scorpion**********************************/
    if((jour>=23&&mois==10)||(jour<=22&&mois==11))
    {
        printf("Scorpion");
    } else
        /**************************Sagittaire**********************************/
    if((jour>=23&&mois==11)||(jour<=21&&mois==12))
    {
        printf("Sagittaire");
    } else
        /***************************Capricorne*********************************/
    if((jour>=22&&mois==12)||(jour<=20&&mois==1))
    {
        printf("Balance");
    } else
        /***************************Verseau*************************************/
    if((jour>=21&mois==1)||(jour<=18&&mois==2))
    {
        printf("Balance");
    } else
        /**************************Poisssons***************************************/
    if((jour>=19&&mois==2)||(jour<=20&&mois==3))
    {
        printf("Poissons");
    } else



        return 0;
}
