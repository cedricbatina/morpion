#include "pch.h"
#include "Joueur.h"
Joueur::Joueur(String^ nom, Image^ symbole, Label^ labelScore)
{
	this->nom = nom;
	this->symbole = symbole;
	this->labelScore = labelScore;
	propScore = 0;
}
int Joueur::propScore::get() {
	return score;
}

String^ Joueur::propNom::get() {
	return (String^)nom->Clone();
}
Image^ Joueur::propSymbole::get() {
	return (Image ^) symbole->Clone();
}

//nombre de joues par un joueur
int coupsJoues;

array<Joueur^>^ listeJoueurs;


//Handle vers le joueur qui a la main
Joueur^ joueurCourant;

void Joueur::propScore::set(int valeur)
{
	//donne � la variable priv�e score sa nouvelle valeur
	score = valeur;


	//Met � jour le label dans la fen�tre 
	labelScore->Text = propScore.ToString();

}







