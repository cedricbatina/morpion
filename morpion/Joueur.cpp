#include "pch.h"
#include "Joueur.h"
Joueur::Joueur(String^ nom, Image^ symbole, Label^ labelScore)
{
	this->nom = nom;
	this->symbole = symbole;
	this->labelScore = labelScore;
	propScore = 0;
}

void Joueur::propScore::set(int valeur)
{
	//donne � la variable priv�e score sa nouvelle valeur
	score = valeur;


	//Met � jour le label dans la fen�tre 
	labelScore->Text = propScore.ToString();

}


