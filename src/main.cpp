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
int suppr;
int n;
int i;

int main() {
vector <float> reel(10);

	cout<<"Vous disposez d'un tableau de réel auquel vous pouvez y ajouter des nombres"<<endl;
	while(choix != "EXIT"){
		cout<<"Que voulez faire ?"<<endl;
		cout<<"Commandes : AJOUTER / AFFICHER / SUPPRIMER / SUPPR / EXIT"<<endl;
		cin>>choix;
		cout<<" "<<endl;

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
		if(choix == "AFFICHER"){
			for(i=0; i<inc; i++){
				cout<<"Nombre stocké : "<<reel[i]<<endl;
				cout<<" "<<endl;
			}
		}
		if(choix == "SUPPR"){
			for(i=0; i<reel.size(); i++){
			reel[i].erase;
			}
		}
	}
		return 0;
}
