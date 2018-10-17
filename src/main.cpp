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

vector <float> reel(10);

	cout<<"Vous disposez d'un tableau de réel auxquel vous pouvez y ajouter des nombres"<<endl;
	cout<<"Voulez vous ajouter un nombre à votre tableau ?"<<endl;
	cin>>yesno;
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

	cout<<"Voulez afficher les reel stockés dans le tableau ?"<<endl;
	cin>>yesno;
	for(int i=0; i<inc; i++){
		cout<<"Nombre stocké : "<<reel[i]<<endl;
	}
	return 0;
}
