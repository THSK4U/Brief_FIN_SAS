#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int choix;
	choix=1;
	while (choix>=1) {
		system("color 8F");
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
printf("1- afficher la liste des taches \n");
		break;
	case 2:
printf("2- Ajouter une taches \n");
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

