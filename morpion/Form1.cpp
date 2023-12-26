#include "pch.h"
//#include "Joueur.h"


using namespace System;
using namespace System::Windows::Forms;
//nombre de joues par un joueur


namespace CppCLRWinFormsProject {
	// Implémentation des méthodes de Form1 ici
	
	void Form1::PasseLaMain(Joueur^ joueur)
	{
		joueurCourant = joueur;

		labelJoueurCourant->Text = joueurCourant->propNom->ToUpper() + " JOUE";
	}

	void Form1::NouvelleManche(void) {
		//instancie un tableau à deux dimension, de taille 3x3
		grille = gcnew array<Joueur^, 2>(3, 3);

		//initialise chacun de ses éléments à nullptr
		for each (Joueur ^ %caseGrille in grille)
			caseGrille = nullptr;

		case_0_0->Image = nullptr;
		case_1_0->Image = nullptr;
		case_2_0->Image = nullptr;
		case_0_1->Image = nullptr;
		case_0_2->Image = nullptr;
		case_1_1->Image = nullptr;
		case_2_2->Image = nullptr;
		case_1_2->Image = nullptr;
		case_2_1->Image = nullptr;

		coupsJoues = 0;



	}

	bool Form1::Alignement(void) {
		// Rechercher un alignement en ligne
		for (int ligne = 0; ligne < 3; ligne++) {
			if (grille[0, ligne] == joueurCourant && grille[1, ligne] == joueurCourant && grille[2, ligne] == joueurCourant)
				return true;
		}
		// Rechercher un alignement en colonne
		for (int colonne = 0; colonne < 3; colonne++) {
			if (grille[colonne, 0] == joueurCourant && grille[colonne, 1] == joueurCourant && grille[colonne, 2] == joueurCourant)
				return true;
		}
		// Rechercher un alignement en diagonale
		if (grille[0, 0] == joueurCourant && grille[1, 1] == joueurCourant && grille[2, 2] == joueurCourant)
			return true;
		if (grille[0, 2] == joueurCourant && grille[1, 1] == joueurCourant && grille[2, 0] == joueurCourant)
			return true;

		return false; // Ajouter une valeur de retour pour les cas où aucun alignement n'est trouvé
	}
	void Form1::NouvellePartie(void) {
		//crée un tableau à deux éléments
		listeJoueurs = gcnew array<Joueur^>(2);

		//instancie les deux objets Joueur
		listeJoueurs[0] = gcnew Joueur("Yohann", listeImages->Images[0],
			labelScoreJoueur1);
		listeJoueurs[1] = gcnew Joueur("Elijah", listeImages->Images[1], labelScoreJoueur2);
	}
	Void Form1::cliqueBoutonQuitter(Object^ sender, EventArgs^ e) {
		Close();
	}
	Void Form1::clicBoutonNouvellePartie(Object^ sender, EventArgs^ e) {
		NouvellePartie();
	}
	Void Form1::clicCase(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ appelant = (PictureBox^)sender;
		Point coordonnees = (Point)appelant->Tag;
		//quitte la fonction si la case contient déjà une marque 

		if (grille[coordonnees.X, coordonnees.Y] != nullptr) return;
		// attribue la case au joueur courant 
		grille[coordonnees.X, coordonnees.Y] = joueurCourant;
		//affiche la marque du joueur dans la case 
		appelant->Image = joueurCourant->propSymbole;

		//incrémente le nombre de coups joués 
		coupsJoues++;

		//en case victoire
		if (Alignement() == true) {
			//affiche une boîte de message 
			MessageBox::Show(joueurCourant->propNom + " remportez la manche!", "Morpion");
			//augmente le score 
			joueurCourant->propScore++;

			//entame une nouvelle manche
			NouvelleManche();
		}


		else if (coupsJoues == 0) {
			MessageBox::Show("Match nul !", "Morpion");
			NouvelleManche();
		}
		//passe la main à l'adversaire 
		if (joueurCourant == listeJoueurs[0]) PasseLaMain(listeJoueurs[1]);
		else
			PasseLaMain(listeJoueurs[0]);





			//actualise la zone de texte portant le nom des joueurs
		labelNomJoueur1->Text = listeJoueurs[0]->propNom;
		labelNomJoueur2->Text = listeJoueurs[1]->propNom;
		//passe la main au premier joueurn, et débute la manche

		PasseLaMain(listeJoueurs[0]);
		NouvelleManche();

	}

	


}



















