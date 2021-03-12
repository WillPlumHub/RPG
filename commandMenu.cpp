/*This program is meant to manage the command selection.
Firstsly, a menu is output to show the user their options.
Secondly, the user is prompted to type the command they wish to execute.
Then, the program should check the user's responce and take the appropriate action.*/

#include <iostream>

//Display command meny "graphics"
void menu() {

   std::cout << "0--------------------0" << std::endl;
   std::cout << "|______COMMANDS______|" << std::endl;
   std::cout << "| " << ">" << "Attack            |" << std::endl;
   std::cout << "| " << ">" << "Spells            |" << std::endl;
   std::cout << "| " << ">" << "Defend            |" << std::endl;
   std::cout << "0--------------------0" << std::endl;
}

//Choose action to be taken based off of user input
int selection(std::string x) {

   return 0;
}


int main() {

   std::string options[] = {"Attack", "Spell", "Defend"};

   std::string choice;
   menu();

   std::cout << "Chose your option: " << std::endl;
   std::cin >> choice;

   return 0;
}
