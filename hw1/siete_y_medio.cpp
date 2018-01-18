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
Card draw_card();

// Non member functions implementations (if any)
Card draw_card() {
	Card C;
	return C;
}

// Stub for main
int main() {
	//initialize player to keep track of money
	Player Person(100);
	int dealer_loss(0);
	int bet(0);
	int game_number(0);
	bool winner(false);
	ofstream myfile;
	Hand Player_hand;
	Hand Dealer_hand;
	string answer = "n";
	Card draw;

	//game will keep playing as long as player's money is above 0
	while (Person.get_money() > 0) {
		std::cout << "You have $" << Person.get_money() << ". ";
		//internal check to make sure proper betting is occuring
		while (bet == 0 || bet > Person.get_money()) {
			std::cout << "Place your bet: ";
			cin >> bet;
		}
		
		draw = draw_card();
		Player_hand.deal_card(draw);
		cout << "Your cards:" << endl;
		Player_hand.print_hand();

		cout << "Your total is " << Player_hand.sum_hand() << ". Do you want another (y/n)? ";
		cin >> answer;
		while (answer == "y" && Player_hand.sum_hand() < 7.5) {
			draw = draw_card();
			Player_hand.deal_card(draw);
			cout << "New card: " << endl;
			draw.print_card();
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


		draw = draw_card();
		Dealer_hand.deal_card(draw);
		cout << "Dealer's cards: ";
		draw.print_card();
		cout << "The dealer's total is " << Dealer_hand.sum_hand() << "." << endl;
		while (Dealer_hand.sum_hand() < 5.5) {
			draw;
			Dealer_hand.deal_card(draw);
			cout << "New card: " << endl;
			draw.print_card();
			cout << "Dealer's cards: " << endl;
			Dealer_hand.print_hand();
			if (Dealer_hand.sum_hand() > 7.5){
				cout << "The dealer busted!" << endl;
				break;
			}
			cout << "The dealer's total is " << Dealer_hand.sum_hand() << "." << endl;
		}
		if (Player_hand.sum_hand() > 7.5)
			winner = false;

		else if (Dealer_hand.sum_hand() > 7.5)
			winner = true;

		else if (Player_hand.sum_hand() <= Dealer_hand.sum_hand())
			winner = false;

		else if (Player_hand.sum_hand() > Dealer_hand.sum_hand())
			winner = true;

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
		/*
		//CODE TO WRITE TO LOG FILE AFTER EACH GAME
		//NEED TO INSERT CLASS FUNCTIONS IN GAPS
		myfile.open("gamelog.txt");
		myfile << "Game number: " << game_number << "/t Money left: $" << Person.get_money() << endl;
		myfile << "Bet: " << bet << endl << endl;
		myfile << "Your cards:" << endl;

		//PRINT PLAYER CARDS HERE

		myfile << "Your total: " << Player_hand.sum_hand();

		myfile << "Dealer's cards:" << endl;

		//PRINT DEALER CARDS

		myfile << "Dealer's total is " << Dealer_hand.sum_hand();

		myfile << "-----------------------------------------------" << endl;
		myfile.close();
		*/
		game_number++;
		//reset all variables
		bet = 0;
		Player_hand.empty_hand();
		Dealer_hand.empty_hand();
	}

	return 0;
}