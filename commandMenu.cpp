#include <iostream>

//Display command meny "graphics"
std::string menu() {

   std::cout << "0--------------------0" << std::endl;
   std::cout << "|______COMMANDS______|" << std::endl;
   std::cout << "| " << ">" << "Attack            |" << std::endl;
   std::cout << "| " << ">" << "Spells            |" << std::endl;
   std::cout << "| " << ">" << "Defend            |" << std::endl;
   std::cout << "0--------------------0" << std::endl;

   return NULL;
}

//Choose action to be taken based off of user input
int selection(std::string x) {

   return 0;
}


int main() {

   std::string options[] = {"Attack", "Spell", "Defend"};

   std::string choice;
   std::string cmdMnu = menu();

   std::cout << cmdMnu << std::endl;

   std::cout << "Chose your option: " << std::endl;
   std::cin >> choice;

   return 0;
}
