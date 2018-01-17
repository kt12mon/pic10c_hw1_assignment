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
	int game_number(0);
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

<<<<<<< HEAD
		std::cout << "Your cards:" << endl;
=======
		Hand Player_hand;
		Hand Dealer_hand;
		string answer = "n";

		Card *draw;

		Player_hand.deal_card(draw);
		cout << "Your cards:" << endl;
		Player_hand.print_hand();

		cout << "Your total is " << Player_hand.sum_hand() << ". Do you want another (y/n)? ";
		cin >> answer;
		while (answer == "y" & Player_hand.sum_hand() < 7.5) {
			Card *draw;
			Player_hand.deal_card(draw);
			cout << "New card: " << endl;
			draw->print_card();
			cout << endl << "Your cards:" << endl;
			Player_hand.print_hand();
			if (Player_hand.sum_hand() > 7.5)
			{
				cout << "You busted!" << endl;
				break;
			}
			cout << "Your total is " << Player_hand.sum_hand() << ". Do you want another (y/n)? ";
			cin >> answer;
		}




>>>>>>> Hands_class

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
		
		//CODE TO WRITE TO LOG FILE AFTER EACH GAME
		//NEED TO INSERT CLASS FUNCTIONS IN GAPS
		myfile.open("gamelog.txt");
		myfile << "Game number: " << game_number << "/t Money left: $" << Person.get_money() << endl;
		myfile << "Bet: " << bet << endl << endl;
		myfile << "Your cards:" << endl;

		//PRINT PLAYER CARDS HERE

		myfile << "Your total: "; //PRINT PLAYER TOTAL

		myfile << "Dealer's cards:" << endl;

		//PRINT DEALER CARDS

		myfile << "Dealer's total is "; //PRINT DEALER TOTAL

		myfile << "-----------------------------------------------" << endl;
		myfile.close();

		game_number++;
		bet = 0;
	}

	return 0;
}