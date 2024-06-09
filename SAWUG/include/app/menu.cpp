#include "SAWUG.h"
using namespace std;

class Menu {

	void menu() {
		int choice;

		 
		while (1) {
			cout << "What do you wanna do?\n";
			cin >> choice;

			switch (choice) {
				case 1: // move;
					// call function to move;
				case 2: //heal == step++;
					// a function to heal but increases a step count;
				default:
					cout << "Invalid move!\n";
			}

		}
	
		
	}

};