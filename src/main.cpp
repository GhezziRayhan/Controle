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

int main(){

string yesno;
int inc;
int n;

vector <float> reel(inc);

	cout<<"Vous disposez d'un tableau de réel auxquel vous pouvez y ajouter des nombres"<<endl;
	cout<<"Voulez vous ajouter un nombre à votre tableau ?"<<endl;
	cin>>yesno;

	if(yesno == "oui"){
		cout<<"Combien de nombre voulez vous entrer ?"<<endl;
		cin>>inc;

		ofstream save_tab;
		save_tab.open("tableau.txt");
		for(int i=0; i<inc; i++){
			cout<<"Tapez le(s) nombre(s) que vous souhaitez entrer : "<<endl;
			cin>>reel[i];
			save_tab<<"Nombre stocké : "<<reel[i]<<endl;
		}
		save_tab.close();
	}
	else {
		cout<<"Fin du code"<<endl;
		return 0;
	}

	cout<<"Voulez afficher les reel stockés dans le tableau ?"<<endl;
	cin>>yesno;

	if(yesno == "oui"){
		for(int i=0; i<inc; i++){
			cout<<"Nombre stocké : "<<reel[i]<<endl;
		}
	}
	else {
		cout<<"Fin du code"<<endl;
		return 0;
	}
	cout<<"Voulez supprimer le premier réel du tableau ? "<<endl;
	cin>>yesno;

	if(yesno == "oui"){
		cout<<"Voici ce qu'il reste du tableau :"<<endl;
			for(int i=0; i<reel.size(); i++){
				cout<<"Nombre restant : "<<reel[i]<<endl;
			}
	}
	else{
		cout<<"Fin du programme"<<endl;
		return 0;
	}

	return 0;
}
