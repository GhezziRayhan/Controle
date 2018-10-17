/*! \ Fichier main.cpp
* \ Le ficher e
* \ Auteur Ghezzi Rayhan
* \ Version 1.0
*/

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

string choix;
int inc;
int i;
int suppr;

vector <float> reel(3);

/*! \ Main du fichier !
* \ Le main contient un menu qui permet plusieurs commandes : Ajouter des nombres à virgules , Afficher les nombres stocker, Supprimer un nombre donné ou plusieusr nombre donnés (non fonctionnel) ainsi que quitter le menu. Le main.cpp crée également un fichier.txt où on stock les nombres ajoutés.
* \ Le main retourne les nombres lorsqu'on lui demande.
*/

int main() {
	cout<<"Vous disposez d'un tableau de réel auquel vous pouvez y ajouter des nombres"<<endl;

/*! \ While
* \ Il permet d'excuter le menu en continue et met fin au programme si on tape la commande EXIT
*/

	while(choix != "EXIT"){
		cout<<"Que voulez faire ?"<<endl;
		cout<<"Commandes : AJOUTER / AFFICHER / SUPPR / SUPPRIMER / EXIT"<<endl;
		cin>>choix;
		cout<<" "<<endl;

/*! \ Commande Ajouter
* \ Permet de d'ajouter des réels dans le tableaux reel.
*/

		if(choix == "AJOUTER"){

			cout<<"Combien de nombre voulez vous entrer ?"<<endl;
			cin>>inc;
			cout<<" "<<endl;

			ofstream save_tab;
			save_tab.open("tableau.txt");

			for(i=0; i<inc; i++){
				cout<<"Tapez le(s) nombre(s) que vous souhaitez entrer : "<<endl;
				cin>>reel[i];
				save_tab<<"Nombre stocké : "<<reel[0+i]<<endl;
				cout<<" "<<endl;
			}
			save_tab.close();
		}

/*! \ Commande Afficher
* \ Permet d'afficher les chiffres ajouter dans le tableau
*/
		if(choix == "AFFICHER"){
			for(i=0; i<inc; i++){
				cout<<"Nombre stocké : "<<reel[i]<<endl;
				cout<<" "<<endl;
			}
		}

/*! \ Commande Suprr
* \ Est censé supprimer un réel donnée (ne marche pas)
*/
		if(choix == "SUPPR"){
			cout<<"Quel nombre supprimer ?"<<endl;
			cin>>suppr;
			for(i=0; i++;){
				if(i==suppr){
					cout<<"coucou"<<endl;
				}
			}
		}

/*! \ Commande Supprimer
* \ Est censé supprimer tout le tableau (ne marche pas)
*/
		if(choix == "SUPPRIMER"){
			reel.clear();
		}
	}
		return 0;

}
