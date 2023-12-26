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
	//donne � la variable priv�e score sa nouvelle valeur
	score = valeur;


	//Met � jour le label dans la fen�tre 
	labelScore->Text = score.ToString();

}


