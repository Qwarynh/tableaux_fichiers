#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include "etudiant.h"

using namespace std;



int main(){

vector <etudiant> etudiants;

ofstream f_notes;

int compteur;


cout << "Combien voulez vous d'étudiant? (max 5)" << endl;

cin >> compteur;

if (compteur> 5){

	cout << "erreur, veuillez re-saisir le nombre" << endl;
	main();

} else {

f_notes.open("notes.txt");

	for (int i=0 ; i < compteur; i++){
		double n;
		string na;
		cout<< "Quel est le nom de l'élève?" << endl;
		cin >> na;
		cout<< "Quelle note voulez vous attribuer à " << na << " ?" << endl;
		cin >> n;
		etudiants.push_back(etudiant(na, n));
		f_notes << na << "		"<< n << endl;
		}
f_notes.close(); 
	}
string x = "o";
string name;
while (x == "o"){

cout << "Voulez vous regarder une  note d'un étudiant? o, n" << endl;
cin >> x;

 	if (x == "n"){
	break;
	} else{
	cout << "De quel etudiant voulez vous regarder la note?" << endl;
	cin >> name;
		for (int i=0; i< etudiants.size(); i++){
			if (name == etudiants[i].nom)
				{
			cout << etudiants[i].note <<endl;
			break;
			} else if (i == (etudiants.size() -1)) {
			cout << "Cet élève n'existe pas" << endl;
			}
	}
	}
}

// gérer la persistance des notes
	ofstream fichier_notes;
	fichier_notes.open("file.txt");
	fichier_notes << "EPSI";
	fichier_notes.close();
}
