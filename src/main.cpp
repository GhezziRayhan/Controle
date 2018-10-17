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

string nombre;
string yesno;
int inc;

vector <float> reel;
vector <int> number;

	cout<<"Vous disposez d'un tableau de réel auxquel vous pouvez y ajouter des nombres"<<endl;
	cout<<"Voulez vous ajouter un nombre à votre tableau ?"<<endl;
	cin>>yesno;
	cout<<"Combien d'entier voulez vous entrer ?"<<endl;
	cin>>inc;

	for(int i=0; i<inc; i++){
	cout<<"Tapez le(s) nombre(s) que vous souhaitez entrer : "<<endl;
	cin>>nombre[i];
	}

	cout<<"Voulez afficher les reel stockés dans le tableau ?"<<endl;
	cin>>yesno;
	for(int i=0; i<inc; i++){
		cout<<"Nombre stocké : "<<nombre[i]<<endl;
	}
	return 0;
}
