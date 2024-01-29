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
	int priority;
	date datecreation;
}tache;

void ajouter (tache tache[],int n){
    if (n<numberstock){
	printf("Enter nom de tache : ");
	scanf(" %[^\n]",tache[n].name);
	printf("Enter description tache : ");
	scanf(" %[^\n]",tache[n].description);
	printf("Enter la priorite (1-5): ");
    scanf("%d", &tache[n].priority);
	printf("Enter le jour :  ");
	scanf("%d",&tache[n].datecreation.jour);
	printf("Enter le mois :  ");
	scanf("%d",&tache[n].datecreation.mois);
	printf("Enter l'annee :  ");
	scanf("%d",&tache[n].datecreation.annee);
	n++;
}else{
	printf("Le nombre des taches autorise est 150");
	system("color 4C");
}}


void afficher (tache tache[],int n){
	char k;
while (1) {
		system("color 8F");
        printf("\nSouhaitez-vous afficher ? y/n: ");
        scanf(" %c", &k);
        if (k == 'n') {
        	system("color 4C");
            break;
        } else if (k == 'y'){
		int i;
   			 for (i = 0; i < n; i++){
        printf("nom de la tâche : %s  | description : %s | Priorite : %d | la date d'echeance : %d/%d/%d \n",tache[i].name,
														tache[i].description,
														tache[i].priority,
														tache[i].datecreation.jour,
														tache[i].datecreation.mois,
														tache[i].datecreation.annee);}
	}else {	
	system("color 4C");
	}
}}

void afficheavecnomber (tache tache[],int n){
		int i;
   			 for (i = 0; i < n; i++){
	printf("nombre de la tache %d | nom de la tâche : %s | Description : %s | Priorite : %d | la date d'échéance :  %d/%d/%d \n",i,tache[i].name,
														tache[i].description,
														tache[i].priority,
														tache[i].datecreation.jour,
														tache[i].datecreation.mois,
														tache[i].datecreation.annee);}
}


void modifier (tache tache[],int n){
	int nombermodifier;
	char k;
	int i;
	int index = 0;
	while(1){
		system("color 8F");
        printf("\nSouhaitez-vous afficher ? y/n: ");
        scanf(" %c", &k);
        if (k == 'n') {
        	system("color 4C");
            break;
        } else if (k == 'y'){
    afficheavecnomber(tache,n);
	printf("Saisissez numero de la tache que vous souhaitez modifier : ");
	scanf("%d",&index);
	if (index >=0 && index < n) {
	printf("1-nom 2-description 3-jour 4-mois 5-annee ");
	scanf("%d",&nombermodifier);
	switch(nombermodifier){
	case 1 :
		printf("modifier nom : ");
		scanf(" %[^\n]", tache[index].name);
		break;
	case 2 :
		printf("modifier description : ");
		scanf(" %[^\n]", tache[index].description);
		break;
	case 3:
		printf("modifier jour : ");
		scanf("%d",&tache[index].datecreation.jour);
		break;
	case 4:
		printf("modifier mois : ");
		scanf("%d",&tache[index].datecreation.mois);
		break;
	case 5:
		printf("modifier annee : ");
		scanf("%d",&tache[index].datecreation.annee);
		break;	
	default :
		system("color 4C");
		printf("\t\t\t\t\t\t Le choix n'existe pas \n");
		break;
} 	
return;
}}}}


void supprimer(tache tache[],int n){
	int nombersupprimer;
	int i;
	int indexsupprimer;
    afficheavecnomber(tache,n);
	printf("Saisissez numero de la tache que vous souhaitez supprimer : ");
	scanf("%d",&indexsupprimer);   
	if (indexsupprimer >=0 && indexsupprimer < n) {
        for (i = indexsupprimer; i < n - 1; i++) {
            tache[i] = tache[i + 1];
    system("color 2A");
    printf("Supprimer avec succes");
    }
}else{ 
	system("color 4C");
	printf("\t\t\t\t\t\t La tache n'existe pas \n");
	}
}



int main(){
	int choix;
	int name[numberstock];
 	int description[numberstock] ;
 	int n,i;
	choix;
	tache tache[numberstock];
	while (choix !=0) {
		system("color 8F");
		
        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t");
printf("menu : \n\n");
printf("\t\t\t\t\t\t");
printf("1- afficher la liste des taches \n");
printf("\t\t\t\t\t\t");
printf("2- Ajouter une tache \n");
printf("\t\t\t\t\t\t");
printf("3- modifier une tache \n");
printf("\t\t\t\t\t\t");
printf("4- supprimer une tache \n");
printf("\t\t\t\t\t\t");
printf("5- trier Par date \n");
printf("\t\t\t\t\t\t");
printf("0- Quiter \n");
printf("\n\n\n\n\n\t\t\t Votre choix : ");
scanf("%d",&choix);
switch(choix){
	case 0 :
		printf(" Quiter \n");
		break;
	case 1 :
afficher(tache,n);
		break;
	case 2:
ajouter(tache,n);
	n++;
		break;
	case 3:
modifier (tache,n);
		break;
		case 4:
supprimer (tache,n);
n--;
		break;	
		case 5:
printf("5- trier Par date \n");
		break;
	default :
		system("color 4C");
		printf("\t\t\t\t\t\t Le choix n'existe pas \n");
		break;
    return 0;
}}}

