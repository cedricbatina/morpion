#include "pch.h"
#include "Joueur.h"
#include "Form1.h"


using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }


using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}

System::Void cliqueBoutonQuitter(System::Object^ sender, System::EventArgs^ e) {
	
}
 System::Void clicBoutonNouvellePartie(System::Object^ sender, System::EventArgs^ e) {
}
 System::Void clicCase(System::Object^ sender, System::EventArgs^ e) {
}

 