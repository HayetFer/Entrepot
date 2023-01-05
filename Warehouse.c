#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nomMax 20
#define prodmax 5000
#define MaxAlles 50
#define Maxrangee 50
typedef struct{
    int reference;
    int allee;
    int rangee;
    char nom [nomMax];
    int produits;
}Produit;


typedef struct {
    int alle;
    int range;
    int reference[20];
    int nbrProd;
}Zone;

typedef struct {
  Produit produits[5000];
  int nombre_produits;
  int nombre_allees;
  int nombre_rangees;
  Zone matrice_zones[MaxAlles][Maxrangee];
} Entrepot;


void initEntrepot(Entrepot *e){
    e->nombre_produits=0;
    e->nombre_allees=0;
    e->nombre_rangees=0;
}


void afficheProduit(Produit *p){
    printf("%d \n",p->allee);
    printf("%d \n" ,p->produits);
    printf("%d \n" , p->rangee);
    printf("%d \n" , p->reference);
    int i =0;
    while(p->nom[i] != '\0'){
        printf("%c" ,p->nom[i]);
        i++;
    }
}



int main(){
    Entrepot z;
    Produit a;
    a.allee=10;
    strcpy(a.nom,"al");
    a.rangee=10;
    a.reference=10;
    a.produits=10;
    afficheProduit(&a);
    initEntrepot(&z);
    
    return 0;
}
