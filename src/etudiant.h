/*! \file etudiant.h
* \brief fichier de la classe etudiant
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>

using namespace std;
/*! \class etudiant
*/

class etudiant 
{
public:

/*! \brief constructeur etudiant définissant un nom na et une note n
* \param na string pour le nom
* \param n double pour la note
*/

	etudiant(string na, double n);


	string nom;
	double note;
protected:


private:
};

