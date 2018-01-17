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

	//game will keep playing as long as player's money is above 0
	while (Person.get_money() > 0) {
		cout << "You have $" << Person.get_money() << ". ";
		//internal check to make sure proper betting is occuring
		while (bet == 0 || bet > Person.get_money()) {
			cout << "Place your bet: ";
			cin >> bet;
		}

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
			cout << "Your total is " << Player_hand.sum_hand() << ". Do you want another (y/n)? ";
			cin >> answer;
		}

		Card *draw;
		Dealer_hand.deal_card(draw);
		cout << "Dealer's cards: ";
		draw->print_card;
		cout << "The dealer's total is " << Dealer_hand.sum_hand() << "." << endl;
		while (Dealer_hand.sum_hand < 5.5) {
			Card *draw;
			Dealer_hand.deal_card(draw);
			cout << "New card: " << endl;
			draw->print_card();
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

		else if (Dealer_hand.sum_hand > 7.5)
			winner = true;

		else if (Player_hand.sum_hand() <= Dealer_hand.sum_hand())
			winner = false;

		else if (Player_hand.sum_hand() > Dealer_hand.sum_hand())
			winner = true;

		//if won: declare winner and add to Player's money and dealer's loss. Do inverse for loss
		if (winner) {
			Person.change_money(bet);
			cout << "You won! You have won " << bet << " dollars!" << endl;
			dealer_loss += bet;
		}
		else {
			Person.change_money(-1 * bet);
			cout << "You lost! You have lost " << bet << " dollars!" << endl;
			dealer_loss -= bet;
		}
	
		//set bet back to 0 to restart game loop
		bet = 0;
	}

	return 0;
}