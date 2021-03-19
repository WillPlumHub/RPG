/*This program is meant to manage the command selection.
Firstsly, a menu is output to show the user their options.
Secondly, the user is prompted to type the command they wish to execute.
Then, the program should check the user's responce and take the appropriate action.*/

#include <iostream>
#include <string>
#include <algorithm>

//Display command menu "graphics"
void menu(std::string x) {

   if (x == "main") {
      std::cout << "0--------------------0\n|______COMMANDS______|\n| " << ">" << "Attack            |\n| " << ">" << "Spells            |\n| " << ">" << "Defend            |\n0--------------------0" << std::endl;
   } else if (x == "spells" || x == "spell") {
      std::cout << "0--------------------0\n|______COMMANDS______|\n| >Flare-1           |\n| >Lightning-2       |\n0--------------------0" << std::endl;
   }
}

void spellManage() {
   std::string z;
   std::cout << "What spell?\n";
   std::cin >> z;
   std::cout << z << " was selected" << std::endl;
}


//Choose action to be taken based off of user input
void optManage(std::string x) {
   if (x == "spells" || x == "spell") {
      menu(x);
      spellManage();
   } else if (x == "attack") {
      std::cout << "Selected the attack command\n";
   } else if (x== "defend") {
      std::cout << "Selected the defence command\n";
   }
}


int main() {

   std::string options[] = {"attack", "defence", "spell"};
   std::string choice = "main";
   menu(choice);

   std::cout << "Enter your choice\n";
   std::cin >> choice;
   transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

   for (auto x : options) {
      if (choice == x) {
         menu(choice);
         optManage(choice);
      }
   }

   return 0;
}
