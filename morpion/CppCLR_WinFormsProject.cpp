#include "pch.h"
#include "Joueur.h"
#include "Form1.h"


using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }
//Tableau contenant les deux objets Joueur





using namespace System::Windows::Forms;

[STAThread]
int main()
{

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());

  return 0;
}




