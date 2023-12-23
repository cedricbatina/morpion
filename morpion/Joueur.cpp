#include "pch.h"
 
Joueur::Joueur(String^ nom, Image^ symbole, Label^ labelScore)
{
	this-> nom = nom;
	this->labelScore = labelScore;
	propScore = 0;
}
int Joueur::propScore::get(void) {
	return score;
}

String^ Joueur::propNom::get(void) {
	return (String^)nom->Clone();
}
Image^ Joueur::propSymbole::get(void) {
	return (Image ^) symbole->Clone();
}

void Joueur::propScore::set(int valeur)
{
	//donne à la variable privée score sa nouvelle valeur
	score = valeur;


	//Met à jour le label dans la fenêtre 
	labelScore->Text = score.ToString(); 
}
