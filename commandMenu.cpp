/*This program is meant to manage the command selection.
Firstsly, a menu is output to show the user their options.
Secondly, the user is prompted to type the command they wish to execute.
Then, the program should check the user's responce and take the appropriate action.*/

#include <iostream>

//Display command meny "graphics"
void menu(std::string x) {

   if (x == "Menu") {
   std::cout << "0--------------------0\n|______COMMANDS______|\n| " << ">" << "Attack            |\n| " << ">" << "Spells            |\n| " << ">" << "Defend            |\n0--------------------0" << std::endl;
   }

   if (x == "Spell") {
   std::cout << "0--------------------0\n|______COMMANDS______|\n| >Flare-1           |\n| >Lightning-2       |\n0--------------------0" << std::endl;
   }
}

//Choose action to be taken based off of user input
int selection(std::string x) {

   return 0;
}


int main() {

   std::string options[] = {"Attack", "Spell", "Defend"};

   std::string choice = "Menu";

   menu(choice);

   std::cout << "Chose your option: " << std::endl;
   std::cin >> choice;

   for (int x = 0; x < sizeof(options)/sizeof(options[0]); x = x + 1) {
   if (choice == options[x]) {
      menu(choice);
      }
   }

   return 0;
}
