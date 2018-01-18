# pic10c_hw1_assignment
## Intro
This a single-player version of the card game known as 'siete y medio' (seven and a half), which is very similar in nature to the casino game of Blackjack (also known as 21). The goal of the game is to get cards whose total value comes the closest to 71/2 without going over it. Getting a card total over 71/2 is called "busting". 

When a player makes a bet against the dealer. There are 4 possible outcomes:
1. The player comes closer to 71/2 than the dealer or the dealer busts but the player did not bust. In this case the player wins the round and the player's money increases by the amount that was bet.
2. The dealer comes closer to 71/2 than the player, or the player busts. In this case the player loses the round and the player's money decreases by the amount that was bet.
3. Both, the player and dealer bust. In this case the player loses the round and the player's money decreases by the amount that was bet. 
This is called house advantage. 
4. Both the player and the dealer have the same total and  they do not bust. In this case a tie is declared and no money is exchanged. is a single-player version of the card game known as 'siete y medio' (seven and a half), which is very similar in nature to the casino game of Blackjack (also known as 21). 

## Branches
Master- origin branch, contains final product. Main development was framework to run game and output game log file
Hands_class - Develops card and hand classes (interface and implemented functions)
Dealer_branch - Develops protocol for dealer to play

## Notable Version History
First commit - put .cpp and .h files given by professor
Basic Outline + Player Class - started skeleton of game and developed simple player class
Hands Class implemented - Developed hand class interface and implemented functions (Started under HAND_CLASS BRANCH)
Dealer protocol - Developed dealer's card drawing procedure (started under DEALER_BRANCH)
Printout Process - Started implementing a file output code (under MASTER branch)
Merge brach "Hand Class" - Merge Hand class branch into Master
Merge branch "Dealer_Branch" - Merge Dealer branch into Master
Version 1.0 - fixed ALL merged conflicts. continued adding to file output procedure
Version 1.1 - finalized file output procedure and made more visually pleasant
Version 1.2 - updated tie procedure

Console output example:
You have $100. Place your bet: 100
Your cards:
        As de espadas(Ace of Swords).
Your total is 1. Do you want another (y/n)? y
New card:
        Cinco de copas(Five of Cups).

Your cards:
        As de espadas(Ace of Swords).
        Cinco de copas(Five of Cups).
Your total is 6. Do you want another (y/n)? y
New card:
        Caballo de espadas(Knight of Swords).

Your cards:
        As de espadas(Ace of Swords).
        Cinco de copas(Five of Cups).
        Caballo de espadas(Knight of Swords).
Your total is 6.5. Do you want another (y/n)? n
Dealer's cards:         Cinco de espadas(Five of Swords).
The dealer's total is 5.
New card:
        Seis de copas(Six of Cups).
Dealer's cards:
        Cinco de espadas(Five of Swords).
        Seis de copas(Six of Cups).
The dealer busted!
You won! You have won 100 dollars!
You now have 200 dollars to play with!
You have $200. Place your bet: 200
Your cards:
        Sota de copas(Jack of Cups).
Your total is 0.5. Do you want another (y/n)? y
New card:
        Dos de copas(Two of Cups).

Your cards:
        Sota de copas(Jack of Cups).
        Dos de copas(Two of Cups).
Your total is 2.5. Do you want another (y/n)? y
New card:
        Tres de bastos(Three of Clubs).

Your cards:
        Sota de copas(Jack of Cups).
        Dos de copas(Two of Cups).
        Tres de bastos(Three of Clubs).
Your total is 5.5. Do you want another (y/n)? y
New card:
        Siete de bastos(Seven of Clubs).

Your cards:
        Sota de copas(Jack of Cups).
        Dos de copas(Two of Cups).
        Tres de bastos(Three of Clubs).
        Siete de bastos(Seven of Clubs).
You busted!
Dealer's cards:         Cinco de bastos(Five of Clubs).
The dealer's total is 5.
New card:
        Cuatro de espadas(Four of Swords).
Dealer's cards:
        Cinco de bastos(Five of Clubs).
        Cuatro de espadas(Four of Swords).
The dealer busted!
You lost! You have lost 200 dollars!
You now have 0 dollars to play with!
Press any key to continue . . .

You have $100. Place your bet: 100
Your cards:
        As de espadas(Ace of Swords).
Your total is 1. Do you want another (y/n)? y
New card:
        Cinco de copas(Five of Cups).

Your cards:
        As de espadas(Ace of Swords).
        Cinco de copas(Five of Cups).
Your total is 6. Do you want another (y/n)? y
New card:
        Caballo de espadas(Knight of Swords).

Your cards:
        As de espadas(Ace of Swords).
        Cinco de copas(Five of Cups).
        Caballo de espadas(Knight of Swords).
Your total is 6.5. Do you want another (y/n)? n
Dealer's cards:         Cinco de espadas(Five of Swords).
The dealer's total is 5.
New card:
        Seis de copas(Six of Cups).
Dealer's cards:
        Cinco de espadas(Five of Swords).
        Seis de copas(Six of Cups).
The dealer busted!
You won! You have won 100 dollars!
You now have 200 dollars to play with!
You have $200. Place your bet: 200
Your cards:
        Sota de copas(Jack of Cups).
Your total is 0.5. Do you want another (y/n)? y
New card:
        Dos de copas(Two of Cups).

Your cards:
        Sota de copas(Jack of Cups).
        Dos de copas(Two of Cups).
Your total is 2.5. Do you want another (y/n)? y
New card:
        Tres de bastos(Three of Clubs).

Your cards:
        Sota de copas(Jack of Cups).
        Dos de copas(Two of Cups).
        Tres de bastos(Three of Clubs).
Your total is 5.5. Do you want another (y/n)? y
New card:
        Siete de bastos(Seven of Clubs).

Your cards:
        Sota de copas(Jack of Cups).
        Dos de copas(Two of Cups).
        Tres de bastos(Three of Clubs).
        Siete de bastos(Seven of Clubs).
You busted!
Dealer's cards:         Cinco de bastos(Five of Clubs).
The dealer's total is 5.
New card:
        Cuatro de espadas(Four of Swords).
Dealer's cards:
        Cinco de bastos(Five of Clubs).
        Cuatro de espadas(Four of Swords).
The dealer busted!
You lost! You have lost 200 dollars!
You now have 0 dollars to play with!
Press any key to continue . . .

## Sample File Output:
Game number: 1	 Money left: $200
Bet: 100

Your cards:
	As de espadas(Ace of Swords).
	Cinco de copas(Five of Cups).
	Caballo de espadas(Knight of Swords).
Your total: 6.5.

Dealer's cards:
	Cinco de espadas(Five of Swords).
	Seis de copas(Six of Cups).
Dealer's total is 11.

-----------------------------------------------

Game number: 2	 Money left: $0
Bet: 200

Your cards:
	Sota de copas(Jack of Cups).
	Dos de copas(Two of Cups).
	Tres de bastos(Three of Clubs).
	Siete de bastos(Seven of Clubs).
Your total: 12.5.

Dealer's cards:
	Cinco de bastos(Five of Clubs).
	Cuatro de espadas(Four of Swords).
Dealer's total is 9.

-----------------------------------------------

## Known Bugs:
None

