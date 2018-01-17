#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main() {
	//initialize player to keep track of money
	Player Person(100);
	int dealer_loss(0);
	int bet(0);
	bool winner(false);
	ofstream myfile;

	//game will keep playing as long as player's money is above 0
	while (Person.get_money() > 0) {
		std::cout << "You have $" << Person.get_money() << ". ";
		//internal check to make sure proper betting is occuring
		while (bet == 0 || bet > Person.get_money()) {
			std::cout << "Place your bet: ";
			cin >> bet;
		}

		std::cout << "Your cards:" << endl;

		//CODE TO RUN GAME GOES HERE

		//if won: declare winner and add to Player's money and dealer's loss. Do inverse for loss
		if (winner) {
			Person.change_money(bet);
			std::cout << "You won! You have won " << bet << " dollars!" << endl;
			dealer_loss += bet;
		}
		else {
			Person.change_money(-1 * bet);
			std::cout << "You lost! You have lost " << bet << " dollars!" << endl;
			dealer_loss -= bet;
		}
		std::cout << "You now have " << Person.get_money() << " dollars to play with!" << endl;

		//set bet back to 0 to restart game loop
		bet = 0;

		//CODE TO WRITE TO LOG FILE AFTER EACH GAME
		//NEED TO INSERT CLASS FUNCTIONS IN GAPS
		myfile.open("gamelog.txt");
		myfile << "Write test";
		myfile.close();

	}

	return 0;
}