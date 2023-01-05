#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nomMax 20
#define prodmax 5000
#define MaxAlles 100
#define Maxrangee 100
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
    Produit reference[20];
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
    //comment initialiser matrice nulle ?
}
void afficheProduit(Produit *p){
    printf("%d nombre d'allées produit \n",p->allee);
    printf("%d nombre de produits \n" ,p->produits);
    printf("%d nombre de rangée produit \n" , p->rangee);
    printf("%d produit reference \n" , p->reference);
    int i =0;
    while(p->nom[i] != '\0'){
        printf("%c" ,p->nom[i]);
        i++;
    }
}
void afficheZone(Zone *z){
    printf("%d nombre d'alle zone\n" , z->alle);
    printf("%d nombre de rangées zone \n" , z->range);
    printf("%d nombre de produits zone \n", z->nbrProd);
    int i = 0; 
    while(i<20){
        if(z->reference[i].reference!=0){
            afficheProduit(&z->reference[i]);
        
        }
        i++;
    }    
}



void afficheEntrepot(Entrepot *e){
    printf("%d nombre de produits entrepot \n",e->nombre_produits);
    printf("%d nombre d'allées entrepot \n",e->nombre_allees);
    printf("%d nombre de rangées entrepot \n",e->nombre_rangees);
    int i =0;
    int j=0;
    while(i<MaxAlles){
        while(j<Maxrangee){
                if(e->matrice_zones[i][j].alle!=0){
                    afficheZone(&e->matrice_zones[i][j]);
                }
            j++;
        }
        i++;
    }
    int w = 0;
}


void ajouteProduit(Produit *p, Zone *z, Entrepot *e){
    int i = 0;
    while(e->produits[i].allee!=0){
        i++;
    }
    int j =0;
    while(z->reference[j].reference!=p->reference){
        j++;
    }
    e->produits[i]=z->reference[j];
}






int main(){
    Entrepot z;
    Produit a;
    a.allee=10;
    strcpy(a.nom,"al");
    a.rangee=10;
    a.reference=10;
    a.produits=10;
    Produit c;
    c.allee=11;
    strcpy(c.nom,"allo");
    c.rangee=1122222;
    c.reference=123333;
    c.produits=1000000;
    Zone b;
    b.alle=10;
    b.range=11;
    b.nbrProd=3;
    b.reference[0]=a;
    //b.reference[1]=c;
    //afficheZone(&b);
    //afficheProduit(&a);
    initEntrepot(&z);
    z.matrice_zones[0][0]=b;
    z.nombre_allees=3;
    z.nombre_produits=4;
    z.nombre_rangees=6;
    //z.produits[0]=a;
    ajouteProduit(&a,&b,&z);
    //ajouteProduit(&c,&b,&z);
    afficheEntrepot(&z);


    
    return 0;
}
