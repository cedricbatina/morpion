//#include "Form1.h"
#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class Joueur
{
private:
	String^ nom;
	Image^ symbole;
	int score;
	Label^ labelScore;


public:
	Joueur(String^ nom, Image^ symbole, Label^ labelScore);
	/**/
		// propScore: accesseurs et mutateurs
	property int propScore {
		int get();
		void set(int valeur);

	}
	//propNom: accesseur seul
	property String^ propNom {
		String^ get();
	}
	//propSymbole : accesseur suel
	property Image^ propSymbole {
		Image^ get();
	}
};


/*Joueur(String^ nom, Image^ symbole, Label^ labelScore);

// propScore: accesseurs et mutateurs
	property int propScore {
		int get();
		void set(int valeur);

	}
	//propNom: accesseur seul
	property String^ propNom {
		String^ get();
	}
	//propSymbole : accesseur suel
	property Image^ propSymbole {
		Image^ get();
	}


	int Joueur::propScore::get(void) {
		return score;
	}

	String^ Joueur::propNom::get(void) {
		return (String^)nom->Clone();
	}
	Image^ Joueur::propSymbole::get(void) {
		return (Image^)symbole->Clone();
	}*/