#include <stdio.h>
#include <stdlib.h>
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
}else{
	printf("Le nombre des taches autorise est 150");
	system("color 4C");
}}


void afficher (tache tache[],int n){
	
		int i;
		if(n>0){
		for (i = 0; i < n; i++){
   			 	
        printf("nom de la tache : %s  | description : %s | Priorite : %d | la date d'echeance : %d/%d/%d \n",tache[i].name,
														tache[i].description,
														tache[i].priority,
														tache[i].datecreation.jour,
														tache[i].datecreation.mois,
														tache[i].datecreation.annee);}
		}else{
			printf("Aucun tache \n");
		}
   			 system("pause");
	}

void afficheavecnomber (tache tache[],int n){
		int i;
   			 for (i = 0; i < n; i++){
   			 	printf("numero de la tache : %d \n",i+1);
   			 	printf("nom de la tache : %s	| description : %s | Priorite : %d | la date d'echeance : %d/%d/%d \n",tache[i].name,
														tache[i].description,
														tache[i].priority,
														tache[i].datecreation.jour,
														tache[i].datecreation.mois,
														tache[i].datecreation.annee);
				printf("----------------------------------------- \n",i+1);
	}
}


void modifier (tache tache[],int n){
	int nombermodifier;
	int i;
	int index,indexplus;
	
	afficheavecnomber(tache,n);
    if (n>0) {
	printf("Saisissez numero de la tache que vous souhaitez modifier : ");
	scanf("%d",&indexplus);
		
		if (index >=0 && index < n) {
			printf("1-nom 2-description 3-jour 4-mois 5-annee ");
			scanf("%d",&nombermodifier);
			index = indexplus - 1;
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

}}else{
			printf("Aucun tache \n");
		}
   			 system("pause");
	}


void supprimer(tache tache[],int n){
	int i;
	int indexsupprimer,insupprimer;
    afficheavecnomber(tache,n);
	printf("Saisissez numero de la tache que vous souhaitez supprimer : ");
	scanf("%d",&insupprimer);
	   indexsupprimer = insupprimer - 1;
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

void trier(tache tasks[], int n) {
    int order;
    int i,j;
    printf("\nChoisissez l'ordre de tri :\n");
    printf("1 - Croissant\n");
    printf("2 - Decroissant\n");
    scanf("%d", &order);

 
			for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                int comparisonresult = comparedates(&tasks[j].datecreation , &tasks[j + 1].datecreation);

                if ((order == 1 && comparisonresult > 0) || (order == 2 && comparisonresult < 0)) {
                    tache temp = tasks[j];
                    tasks[j] = tasks[j + 1];
                    tasks[j + 1] = temp;
                }
        }
    }
                printf("\nListe des taches triees par la date d'echeance :\n");
				    afficheavecnomber(tasks, n);
	system("pause");
	}

int comparedates(date date1, date date2) {
    if (date1.annee > date2.annee ||
        (date1.annee == date2.annee && date1.mois > date2.mois) ||
        (date1.annee == date2.annee && date1.mois == date2.mois && date1.jour > date2.jour)) {
        return 1;
    } else if (date1.annee < date2.annee ||
               (date1.annee == date2.annee && date1.mois < date2.mois) ||
               (date1.annee == date2.annee && date1.mois == date2.mois && date1.jour < date2.jour)) {
        return -1;
    }

    return 0;
}

void filtrer(tache tache[], int n) {
    int filter,i;
    printf("Tapez le numero de priorite que vous souhaitez afficher (1-5) : ");
    scanf("%d", &filter);

    printf("Taches avec la priorite %d :\n", filter);

    for (i = 0; i < n; i++) {
        if (tache[i].priority == filter) {
            printf("Nom : %s | Description : %s | Priorite : %d | Date : %d/%d/%d \n", tache[i].name,
                   tache[i].description, tache[i].priority, tache[i].datecreation.jour,
                   tache[i].datecreation.mois, tache[i].datecreation.annee);
        }
    }    system("pause");

}

int main(){
	int choix;
	int name[numberstock];
 	int description[numberstock] ;
 	int n = 0;
	choix;
	tache tache[numberstock];
	while (choix !=0) {
		system("color 8F");
		system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t");
printf("Menu : \n\n");
printf("\t\t\t\t\t\t");
printf("1- Afficher la liste des taches \n");
printf("\t\t\t\t\t\t");
printf("2- Ajouter une tache \n");
printf("\t\t\t\t\t\t");
printf("3- Modifier une tache \n");
printf("\t\t\t\t\t\t");
printf("4- Supprimer une tache \n");
printf("\t\t\t\t\t\t");
printf("5- Trier Par date \n");
printf("\t\t\t\t\t\t");
printf("6- Filtrer par priorite \n");
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
trier (tache,n);
		break;
		case 6:
filtrer(tache,n);
		break;
	default :
		system("color 4C");
		printf("\t\t\t\t\t\t Le choix n'existe pas \n");
		break;
    return 0;
}}}
