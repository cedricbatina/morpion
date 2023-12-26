#include "pch.h"
//#include "Joueur.h"



int Joueur::propScore::get(void) {
	return score;
}

String^ Joueur::propNom::get(void) {
	return (String^)nom->Clone();
}
Image^ Joueur::propSymbole::get(void) {
	return (Image^)symbole->Clone();
}
Joueur::Joueur(String^ nom, Image^ symbole, Label^ labelScore)
{
	this->nom = nom;
	this->symbole = symbole;
	this->labelScore = labelScore;
	this->score = 0;
	labelScore->Text = score.ToString();

}

void Joueur::propScore::set(int valeur)
{
	//donne à la variable privée score sa nouvelle valeur
	score = valeur;


	//Met à jour le label dans la fenêtre 
	labelScore->Text = score.ToString();

}


