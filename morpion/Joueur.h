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

	//Tableau contenant les deux objets Joueur
	array<Joueur^>^ listeJoueurs;

	//Handle vers le joueur qui a la main
	Joueur^ joueurCourant;

	//avancement du remplissage de la grille 
	array<Joueur^, 2>^ grille; // Tableau à 2 dimensions

};