#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numberstock 150

typedef struct date{
	int jour;
	int mois;
	int annee;
}date;

typedef struct tache{
	char name[numberstock];
	char description[numberstock];
	date datecreation;
}tache;

void ajouter (tache d){
	char k;
	while (1) {
		system("color 8F");
        printf("\nSouhaitez-vous ajouter ? y/n: ");
        scanf(" %c", &k);
        if (k == 'n') {
            break;
        } else if (k == 'y'){
    char name[numberstock];
	char description[numberstock];
	printf("enter name your taches : ");
	scanf("%s",d.name);
	printf("enter description your taches : ");
	scanf("%s",d.description);
	printf("enter la jour :  ");
	scanf("%d",&d.datecreation.jour);
	printf("enter la mois :  ");
	scanf("%d",&d.datecreation.mois);
	printf("anne :  ");
	scanf("%d",&d.datecreation.annee);

	
}else{
	system("color 4C");
	k =1;
}}
}
void afficher (tache tache[],int n){
		int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("name %s description %s date %d/%d/%d \n",tache[i].name,
														tache[i].description,
														tache[i].datecreation.jour,
														tache[i].datecreation.mois,
														tache[i].datecreation.annee);
    }
}
int main(){
	int choix;
	int name[numberstock];
 	int description[numberstock] ;
	int n=0;
	choix=1;
	tache lestaches[numberstock];
	while (choix !=0) {
		system("color 8F");
		system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t");
printf("menu : \n\n");
printf("\t\t\t\t\t\t");
printf("1- afficher la liste des taches \n");
printf("\t\t\t\t\t\t");
printf("2- Ajouter une taches \n");
printf("\t\t\t\t\t\t");
printf("3- modifier une taches \n");
printf("\t\t\t\t\t\t");
printf("4- retirer une taches \n");
printf("\t\t\t\t\t\t");
printf("0- Quite \n");
printf("\n\n\n\n\n\t\t\t Votre choix : ");
scanf("%d",&choix);
switch(choix){
	case 0 :
		printf(" Quite \n");
		break;
	case 1 :
afficher(lestaches,n);

		break;
	case 2:
ajouter(lestaches[n]);
n++;
		break;
	case 3:
printf("3- modifier une taches \n");
		break;
		case 4:
printf("4- retirer une taches \n");
		break;	
	default :
		system("color 4C");
		printf("\t\t\t\t\t\t Le choix n'existe pas \n");
		break;
    return 0;
}
}}

