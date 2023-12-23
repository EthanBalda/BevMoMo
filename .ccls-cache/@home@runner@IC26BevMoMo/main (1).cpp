#include <iostream>

using namespace std;

int main() {

    cout << endl
         << "******************************************************************"
            "*******\n"
         << "**                         Welcome to BevMoMo                     "
            "     **\n"
         << "******************************************************************"
            "*******\n"
         << "** Please enter choice :                                          "
            "     **\n"
         << "** 1) Place a beverage order                                      "
            "     **\n"
         << "** 2) Display all beverage orders                                 "
            "     **\n"
         << "** 3) Quit                                                        "
            "     **\n"
         << "******************************************************************"
            "*******\n>> ";


      // Choice 1
      cout << "Enter 1 for Beverage or 2 for Coffee >> ";
      cout << "Enter beverage name     >> ";
      cout << "Enter calories          >> ";
      cout << "Enter size (S=Small, M=Medium, or L=Large) >> ";

      cout << "Enter caffeine (in mg)   >> ";
      cout << "Enter roast type         >> ";
      

      // Choice 2
      cout << endl
           << "****************************************************************"
              "*********\n"
           << "**                         All Beverage Orders                  "
              "       **\n"
           << "****************************************************************"
              "*********\n"
           << "| Order # | Name           | Calories | Size | Caffeine (mg) | "
              "Roast    |\n"
           << "****************************************************************"
              "*********\n";
			  
	  // Choice 3
	  cout << "\nEnjoy your beverages!\n\n";


}
