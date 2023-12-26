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
	//donne à la variable privée score sa nouvelle valeur
	score = valeur;


	//Met à jour le label dans la fenêtre 
	labelScore->Text = propScore.ToString();

}


