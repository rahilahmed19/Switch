#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <random>
#include <unistd.h>
#include <time.h>
#include <cstring>
using namespace std;

// Main

class Card {
	public:
		string name, suit; int point, power; // Only exists for the Power Card function, to help differentiate between the face cards
		bool knownToYou, knownToP1, knownToP2, knownToP3, knownToP4 = false;
};

bool answerCompare(string input, string compare) {
	return !(strcasecmp(input.c_str(), compare.c_str()));
}

void switchRankStart(Card& Temp, string& viewer) {
	int power = Temp.power; string point;
	if (viewer == "Player 1" && Temp.knownToP1) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|" << point << "     |  ";
				break;
			
			case 11:
				point = "J";
				cout << "|" << point << "      |  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|" << point << "      |  ";
				break;
			
			case 13:
				point = "K";
				cout << "|" << point << "      |  ";
				break;
			
			case 1:
				point = "A";
				cout << "|" << point << "      |  ";
				break;
			
			default:
				cout << "|" << power << "      |  ";
				break;
		}
	}
	
	else if (viewer == "Player 2" && Temp.knownToP2) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|" << point << "     |  ";
				break;
			
			case 11:
				point = "J";
				cout << "|" << point << "      |  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|" << point << "      |  ";
				break;
			
			case 13:
				point = "K";
				cout << "|" << point << "      |  ";
				break;
			
			case 1:
				point = "A";
				cout << "|" << point << "      |  ";
				break;
			
			default:
				cout << "|" << power << "      |  ";
				break;
		}
	}
	
	else if (viewer == "Player 3" && Temp.knownToP3) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|" << point << "     |  ";
				break;
			
			case 11:
				point = "J";
				cout << "|" << point << "      |  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|" << point << "      |  ";
				break;
			
			case 13:
				point = "K";
				cout << "|" << point << "      |  ";
				break;
			
			case 1:
				point = "A";
				cout << "|" << point << "      |  ";
				break;
			
			default:
				cout << "|" << power << "      |  ";
				break;
		}
	}
	
	else if (viewer == "Player 4" && Temp.knownToP4) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|" << point << "     |  ";
				break;
			
			case 11:
				point = "J";
				cout << "|" << point << "      |  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|" << point << "      |  ";
				break;
			
			case 13:
				point = "K";
				cout << "|" << point << "      |  ";
				break;
			
			case 1:
				point = "A";
				cout << "|" << point << "      |  ";
				break;
			
			default:
				cout << "|" << power << "      |  ";
				break;
		}
	}
	
	else { cout << "|?      |  "; }
}

void switchRankEnd(Card& Temp, string& viewer) {
	int power = Temp.power; string point;
	if (viewer == "Player 1" && Temp.knownToP1) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|     " << point << "|  ";
				break;
			
			case 11:
				point = "J";
				cout << "|      " << point << "|  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|      " << point << "|  ";
				break;
			
			case 13:
				point = "K";
				cout << "|      " << point << "|  ";
				break;
			
			case 1:
				point = "A";
				cout << "|      " << point << "|  ";
				break;
			
			default:
				cout << "|      " << power << "|  ";
				break;
		}
	}

	else if (viewer == "Player 2" && Temp.knownToP2) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|     " << point << "|  ";
				break;
			
			case 11:
				point = "J";
				cout << "|      " << point << "|  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|      " << point << "|  ";
				break;
			
			case 13:
				point = "K";
				cout << "|      " << point << "|  ";
				break;
			
			case 1:
				point = "A";
				cout << "|      " << point << "|  ";
				break;
			
			default:
				cout << "|      " << power << "|  ";
				break;
		}
	}

	else if (viewer == "Player 3" && Temp.knownToP3) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|     " << point << "|  ";
				break;
			
			case 11:
				point = "J";
				cout << "|      " << point << "|  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|      " << point << "|  ";
				break;
			
			case 13:
				point = "K";
				cout << "|      " << point << "|  ";
				break;
			
			case 1:
				point = "A";
				cout << "|      " << point << "|  ";
				break;
			
			default:
				cout << "|      " << power << "|  ";
				break;
		}
	}

	else if (viewer == "Player 4" && Temp.knownToP4) {
		switch (power) {
			case 10:
				point = "10";
				cout << "|     " << point << "|  ";
				break;
			
			case 11:
				point = "J";
				cout << "|      " << point << "|  ";
				break;
			
			case 12:
				point = "Q";
				cout << "|      " << point << "|  ";
				break;
			
			case 13:
				point = "K";
				cout << "|      " << point << "|  ";
				break;
			
			case 1:
				point = "A";
				cout << "|      " << point << "|  ";
				break;
			
			default:
				cout << "|      " << power << "|  ";
				break;
		}
	}

	else { cout << "|      ?|  "; }
}

void printSuit(Card& Temp, string& viewer) {
	string suit = Temp.suit;
	if (viewer == "Player 1" && Temp.knownToP1) {
			cout << "|   " << suit << "   |  ";
	}

	else if (viewer == "Player 2" && Temp.knownToP2) {
			cout << "|   " << suit << "   |  ";
	}

	else if (viewer == "Player 3" && Temp.knownToP3) {
			cout << "|   " << suit << "   |  ";
	}

	else if (viewer == "Player 4" && Temp.knownToP4) {
			cout << "|   " << suit << "   |  ";
	}
	
	else {
		cout << "|   ?   |  ";
	}
}

void printCard(Card& Temp, string& viewer) {
	int rank = Temp.power; string suit = Temp.suit;
	cout << " ———————   " << endl;
	if (Temp.power >= 10 || Temp.power == 1) {
		switchRankStart(Temp, viewer); cout << endl;
	}
	else {
		cout << "|" << rank << "      |  " << endl;
	}
	cout << "|       |" << endl;
	printSuit(Temp, viewer); cout << endl;
	cout << "|       |" << endl;
	if (Temp.power >= 10 || Temp.power == 1) {
		switchRankEnd(Temp, viewer); cout << endl;
	}
	else {
		cout << "|      " << rank << "|  " << endl;
	}
	cout << " ———————   " << endl;
}

void printStack(vector<Card>& Stack, string& viewer) {
	if (Stack.size() == 1) { printCard(Stack.at(0), viewer); }
	else {
		int i = Stack.size(); i--;
		Card Temp = Stack.at(i - 1);
		Card Temp2 = Stack.at(i); string suit2 = Temp2.suit;
		cout << " ——————— " << endl;
		switchRankStart(Temp, viewer); cout << endl;
		cout << "|  ———————   " << endl;
		cout << "| "; switchRankStart(Temp2, viewer); cout << endl;
		cout << "| |       |  " << endl;
		cout << "| |   " << suit2 << "   |" << endl;
		cout << " —|       |  " << endl;
		cout << "  "; switchRankEnd(Temp2, viewer); cout << endl;
		cout << "   ———————   " << endl;
	}
}

class Player {
	public:
		vector<Card> Hand; string name, answer = ""; int totalPoints, position, playerPosition, player1, player2, card1, card2, choices, ToF, drawAnswer = 0; bool isAI = false;
		// For stats; E, S, and D stand for Eliminate, Swap, and Draw respectively, C stands for count
		int EC = 0; int SC = 0; int DC = 0;

		void printHand(string& viewer) {
			if (Hand.size() <= 1) { printCard(Hand.at(0), name); }
			
			else {
				Card Temp; int rank = Temp.power;
				for (int i = 0; i < Hand.size(); i++) { // Line 1
					cout << " ———————   ";
					if (i == Hand.size() - 1) { cout << endl; }
				}
				
				for (int i = 0; i < Hand.size(); i++) { // Line 2
					rank = Hand.at(i).power;
					switchRankStart(Hand.at(i), viewer);
					if (i == Hand.size() - 1) { cout << endl; }
				}
				
				for (int i = 0; i < Hand.size(); i++) { // Line 3
					cout << "|       |  ";
					if (i == Hand.size() - 1) { cout << endl; }
				}
				
				for (int i = 0; i < Hand.size(); i++) { // Line 4
					printSuit(Hand.at(i), viewer);
					if (i == Hand.size() - 1) { cout << endl; }
				}
				
				for (int i = 0; i < Hand.size(); i++) { // Line 5
					cout << "|       |  ";
					if (i == Hand.size() - 1) { cout << endl; }
				}
				
				for (int i = 0; i < Hand.size(); i++) { // Line 6
					rank = Hand.at(i).power;
					switchRankEnd(Hand.at(i), viewer);
					if (i == Hand.size() - 1) { cout << endl; }
				}
				
				for (int i = 0; i < Hand.size(); i++) { // Line 7
					if (i == Hand.size() - 1) { 
						cout << " ——————— " << endl; 
					}
					else { cout << " ——————— , "; }
				}
			}
		}
		
		void switchNT(int& player, int& card, string& viewer, Player& P1, Player& P2, Player& P3, Player& P4) {
			switch (player) {
				case 1:
					if (viewer == "Player 2") { P1.Hand.at(card).knownToP2 = true; }

					if (viewer == "Player 3") { P1.Hand.at(card).knownToP3 = true; }

					if (viewer == "Player 4") { P1.Hand.at(card).knownToP4 = true; }
					
					printCard(P1.Hand.at(card), viewer); 
					break;
				
				case 2:
					if (viewer == "Player 1") { P2.Hand.at(card).knownToP1 = true; }

					if (viewer == "Player 3") { P2.Hand.at(card).knownToP3 = true; }

					if (viewer == "Player 4") { P2.Hand.at(card).knownToP4 = true; }
					
					printCard(P2.Hand.at(card), viewer); 
					break;
				
				case 3:
					if (viewer == "Player 1") { P3.Hand.at(card).knownToP1 = true; }
					
					if (viewer == "Player 2") { P3.Hand.at(card).knownToP2 = true; }
					
					if (viewer == "Player 4") { P3.Hand.at(card).knownToP4 = true; }
					
					printCard(P3.Hand.at(card), viewer); 
					break;
				
				case 4:
					if (viewer == "Player 1") { P4.Hand.at(card).knownToP1 = true; }

					if (viewer == "Player 2") { P4.Hand.at(card).knownToP2 = true; }

					if (viewer == "Player 3") { P4.Hand.at(card).knownToP3 = true; }
					
					printCard(P4.Hand.at(card), viewer);
					break;
				
				default:
					break;
			}
		}

		void switchHelp(int& player1, int& player2, int& card1, int& card2, Player& P1, Player& P2, Player& P3, Player& P4, Card& Temp1, Card& Temp2) {
			switch (player2) {
				case 1:
					Temp2 = P1.Hand.at(card2);
					P1.Hand.at(card2) = Temp1;
					break;
				
				case 2:
					Temp2 = P2.Hand.at(card2);
					P2.Hand.at(card2) = Temp1;
					break;
				
				case 3:
					Temp2 = P3.Hand.at(card2);
					P3.Hand.at(card2) = Temp1;
					break;
				
				case 4:
					Temp2 = P4.Hand.at(card2);
					P4.Hand.at(card2) = Temp1;
					break;
				
				default:
					break;
			}
		}
		
		void switchJack(int& player1, int& player2, int& card1, int& card2, Player& P1, Player& P2, Player& P3, Player& P4) {
			Card Temp1, Temp2;
			switch (player1) {
				case 1:
					Temp1 = P1.Hand.at(card1);
					switchHelp(player1, player2, card1, card2, P1, P2, P3, P4, Temp1, Temp2);
					P1.Hand.at(card1) = Temp2;
					break;
				
				case 2:
					Temp1 = P2.Hand.at(card1);
					switchHelp(player1, player2, card1, card2, P1, P2, P3, P4, Temp1, Temp2);
					P2.Hand.at(card1) = Temp2;
					break;
				
				case 3:
					Temp1 = P3.Hand.at(card1);
					switchHelp(player1, player2, card1, card2, P1, P2, P3, P4, Temp1, Temp2);
					P3.Hand.at(card1) = Temp2;
					break;
				
				case 4:
					Temp1 = P4.Hand.at(card1);
					switchHelp(player1, player2, card1, card2, P1, P2, P3, P4, Temp1, Temp2);
					P4.Hand.at(card1) = Temp2;
					break;
				
				default:
					break;
			}
		}

		void selfKnown(Card& Temp, string& name) {
			if (name == "Player 1") {
				Hand.at(position).knownToP1 = true;
			}

			if (name == "Player 2") {
				Hand.at(position).knownToP2 = true;
			}

			if (name == "Player 3") {
				Hand.at(position).knownToP3 = true;
			}

			if (name == "Player 4") {
				Hand.at(position).knownToP4 = true;
			}
		}

		void powerCard(int& power, int& wait, bool& knock, Player& P1, Player& P2, Player& P3, Player& P4) {
			Card Temp; string viewer = this->name;
			
			position = rand() % Hand.size(); playerPosition = rand() % 4 + 1;
			player1 = rand() % 4 + 1; player2 = rand() % 4 + 1;
				
			switch (power) {
				case 7:
					cout << "\nYou can look at one of your own cards. Which one would you like to check? (Type the position of the card as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << (position + 1) << endl;
					} 
					
					else { cin >> position; position--; }

					selfKnown(Hand.at(position), name);

					cout << "\nThe card is: " << endl; printCard(Hand.at(position), name); 
					break;
				
				case 8:
					cout << "\nYou can look at one of your own cards. Which one would you like to check? (Type the position of the card as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << (position + 1) << endl;
					} 
					
					else { cin >> position; position--; }

					selfKnown(Hand.at(position), name);

					cout << "\nThe card is: " << endl; printCard(Hand.at(position), name);
					break;
				
				case 9:
					cout << "\nYou can look at one of another player's cards. Which player would you like to check? (Type the number of the player as a digit.)" << endl;

					if (isAI) { 
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << playerPosition << endl;
					} 
					else { cin >> playerPosition; }

					cout << "\nWhich one of their cards would you like to see? (Type the position of the card as a digit.)" << endl;

					if (isAI) { 
						cout << "\n" << name << " keeps thinking." << endl;

						if (playerPosition == 1) { position = rand() % P1.Hand.size(); }
						if (playerPosition == 2) { position = rand() % P2.Hand.size(); }
						if (playerPosition == 3) { position = rand() % P3.Hand.size(); }
						if (playerPosition == 4) { position = rand() % P4.Hand.size(); }
						
						wait = rand() % 3 + 1; sleep(wait);
						cout << (position + 1) << endl;
					} 
					else { cin >> position; position--; }
					
					cout << "\nThe card is: " << endl;
					switchNT(playerPosition, position, viewer, P1, P2, P3, P4);
					break;
				
				case 10:
					cout << "\nYou can look at one of another player's cards. Which player would you like to check? (Type the number of the player as a digit.)" << endl;

					if (isAI) { 
						cout << "\n" << name << " keeps thinking." << endl;
						wait = rand() % 3 + 1; sleep(wait);
						cout << playerPosition << endl;
					} 
					else { cin >> playerPosition; }
					
					cout << "\nWhich one of their cards would you like to see? (Type the position of the card as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << " keeps thinking." << endl;

						if (playerPosition == 1) { position = rand() % P1.Hand.size(); }
						if (playerPosition == 2) { position = rand() % P2.Hand.size(); }
						if (playerPosition == 3) { position = rand() % P3.Hand.size(); }
						if (playerPosition == 4) { position = rand() % P4.Hand.size(); }
						
						wait = rand() % 3 + 1; sleep(wait);
						cout << (position + 1) << endl;
					} 
					else { cin >> position; position--; }
					
					cout << "\nThe card is: " << endl;
					switchNT(playerPosition, position, viewer, P1, P2, P3, P4);
					break;
				
				case 11:
					cout << "\nYou get to switch two cards from any hand in the game." << endl;
					cout << "\nFor the first card, which player is it coming from? (Type the number of the player as a digit.)" << endl;

					if (isAI) { 
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << player1 << endl;
					} 
					else { cin >> player1; }

					cout << "\nWhich one of their cards is it? (Type the position of the card as a digit.)" << endl;

					if (isAI) { 
						cout << "\n" << name << " keeps thinking." << endl;

						if (player1 == 1) { card1 = rand() % P1.Hand.size(); }
						if (player1 == 2) { card1 = rand() % P2.Hand.size(); }
						if (player1 == 3) { card1 = rand() % P3.Hand.size(); }
						if (player1 == 4) { card1 = rand() % P4.Hand.size(); }
						
						wait = rand() % 3 + 1; sleep(wait);
						cout << card1 + 1 << endl;
					} 
					else { cin >> card1; card1--; }
					
					cout << "\nFor the second card, which player is it coming from? (Type the number of the player as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << "'s still thinking." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << player2 << endl;
					} 
					else { cin >> player2; }
					
					cout << "\nWhich one of their cards is it? (Type the position of the card as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << " apparently never stops thinking." << endl;

						if (player2 == 1) { card2 = rand() % P1.Hand.size(); }
						if (player2 == 2) { card2 = rand() % P2.Hand.size(); }
						if (player2 == 3) { card2 = rand() % P3.Hand.size(); }
						if (player2 == 4) { card2 = rand() % P4.Hand.size(); }
						
						wait = rand() % 3 + 1; sleep(wait);
						cout << card2 + 1 << endl;
					} 
					else { cin >> card2; card2--; }
					
					switchJack(player1, player2, card1, card2, P1, P2, P3, P4);
					break;
				
				default:
					break;
			}
		}

		void eliminateCard(vector<Card>& Stack, vector<Card>& Deck, bool& knock, int& wait) {
			cout << "\nChoose which one of your cards you want to eliminate. (Type the position of the card as a digit.)" << endl;
			
			if (isAI) {
				cout << "\n" << name << " is thinking. (again.)" << endl; wait = rand() % 5 + 3; sleep(wait); 
				position = rand() % Hand.size(); cout << (position + 1) << endl;
			}
			
			else { cin >> position; position--; }

			if (Hand.at(position).power == Stack.back().power) {
				selfKnown(Hand.at(position), name);
				Stack.push_back(Hand.at(position));
				Hand.erase(Hand.begin() + position);
				Stack.back().knownToP1 = true; Stack.back().knownToP2 = true;
				Stack.back().knownToP3 = true; Stack.back().knownToP4 = true;
			}
			
			else {
				cout << "\nUnfortunately, the number of the card you chose doesn't match that of the topmost card. As a penalty, you must draw another card." << endl;
				selfKnown(Hand.at(position), name); Hand.push_back(Deck.back());
			}
			
			cout << "\nStack:" << endl; printStack(Stack, name);
		}

		void swapCard(vector<Card>& Stack, bool& knock, int& wait) {
			cout << "\nChoose which one of your cards you want to swap out. (Type the position of the card as a digit.)" << endl;

			if (isAI) {
				cout << "\n" << name << " is thinking. (again.)" << endl; wait = rand() % 5 + 3; sleep(wait);
				position = rand() % Hand.size(); cout << (position + 1) << endl;
			} 
			
			else { cin >> position; position--; } Card Temp;
		
			Temp = Stack.back(); Stack.pop_back(); selfKnown(Hand.at(position), name);
			Stack.push_back(Hand.at(position)); Hand.at(position) = Temp;
			
			Stack.back().knownToP1 = true; Stack.back().knownToP2 = true;
			Stack.back().knownToP3 = true; Stack.back().knownToP4 = true;
			
			cout << "\nStack:" << endl; printStack(Stack, name);
		}

		void drawCard(vector<Card>& Deck, vector<Card>& Stack, bool& knock, int& wait, Player& P1, Player& P2, Player& P3, Player& P4) {
			if (name == "Player 1") { Deck.back().knownToP1 = true; }

			if (name == "Player 2") { Deck.back().knownToP2 = true; }

			if (name == "Player 3") { Deck.back().knownToP3 = true; }

			if (name == "Player 4") { Deck.back().knownToP4 = true; }

			cout << "\nYou drew: " << endl; printCard(Deck.back(), name); 
			cout << "\nDo you put the card in your hand, or onto the stack? (Type \"H\" or \"S\".) " << endl;
			
			if (isAI) {
				cout << "\n" << name << " is thinking. (again.)" << endl; wait = rand() % 5 + 3; sleep(wait); 
				drawAnswer = rand() % 2; if (drawAnswer) { answer = "H"; } else { answer = "S"; }
				cout << answer << endl;
			} 
			
			else { cin >> answer; }
			
			if (answerCompare(answer, "H")) {
				cout << "\nChoose which one of your cards to swap it out with. (Type the position of the card as a digit.)" << endl;

				if (isAI) {
					cout << "\n" << name << " is thinking. For the third time." << endl; wait = rand() % 5 + 3; sleep(wait); 
					position = rand() % Hand.size(); cout << position + 1 << endl;
				}
				
				else { cin >> position; position--; }

				Stack.push_back(Hand.at(position)); selfKnown(Hand.at(position), name);
				Hand.at(position) = Deck.back(); Deck.pop_back(); 
				selfKnown(Hand.at(position), name);
			}
			else {
				powerCard(Deck.back().power, wait, knock, P1, P2, P3, P4);
				Stack.push_back(Deck.back()); Deck.pop_back();
			}
			Stack.back().knownToP1 = true; Stack.back().knownToP2 = true;
			Stack.back().knownToP3 = true; Stack.back().knownToP4 = true;
			
			cout << "\nStack:" << endl; printStack(Stack, name);
		}

		void AI(bool& knock, int& wait, int& playerTurn) { // Send help
			// Easy
			cout << "\n" << name << " is thinking." << endl;
			wait = rand() % 6 + 3; sleep(wait);
			
			int choice = rand() % 100 + 1;
			if (!knock) {
				if (choice > 75 && choice <= 85) { ToF = 1; } 
				if (choice > 40 && choice <= 75) { ToF = 2; }
				if (choice <= 40) { ToF = 3; } 
				if (choice > 85) { ToF = 4; }
			}

			if (playerTurn < 4 || knock) {
				if (choice <= 60) { ToF = 3; } 
				if (choice > 60 && choice <= 85) { ToF = 2; }
				if (choice > 85) { ToF = 1; }
			}

			if (playerTurn == 0) { ToF = 3; } // P1 can only draw a card when starting the game

			switch (ToF) {
				case 1:
					answer = "E"; cout << answer << endl; EC++;
					break;
				
				case 2:
					answer = "S"; cout << answer << endl; SC++;
					break;
				
				case 3:
					answer = "D"; cout << answer << endl; DC++;
					break;
				
				case 4:
					answer = "K"; cout << answer << endl;
					break;
				
				default:
					AI(knock, wait, playerTurn);
					break;
			}
		}

		void turn(int& wait, int& playerTurn, int& position1, int& position2, string& SorM, bool& knock, vector<Card>& Deck, vector<Card>& Stack, Player& P1, Player& P2, Player& P3, Player& P4) {
			if (playerTurn < 4 && !knock) {
				cout << "\nPick which two cards you would like to look at from your hand. (Type the position of the cards as a digit, with a space between them.)" << endl;
				
				if (isAI) { 
					position1 = rand() % 4; position2 = rand() % 4;
					while (position1 == position2) { position2 = rand() % 4; }
					if (position1 > position2) { cout << position2 + 1 << " " << position1 + 1 << endl; }
					else { cout << position1 + 1 << " " << position2 + 1 << endl; }
				}
				else {
					cin >> position1 >> position2; position1--; position2--;
				}
				
				if (name == "Player 1") {
					P1.Hand.at(position1).knownToP1 = true; P1.Hand.at(position2).knownToP1 = true;
					cout << "\nHere are your (known) cards:" << endl; P1.printHand(P1.name);
				}
				if (name == "Player 2") {
					P2.Hand.at(position1).knownToP2 = true; P2.Hand.at(position2).knownToP2 = true;
					cout << "\nHere are your (known) cards:" << endl; P2.printHand(P2.name);
				}
				if (name == "Player 3") {
					P3.Hand.at(position1).knownToP3 = true; P3.Hand.at(position2).knownToP3 = true;
					cout << "\nHere are your (known) cards:" << endl; P3.printHand(P3.name);
				}
				if (name == "Player 4") {
					P4.Hand.at(position1).knownToP4 = true; P4.Hand.at(position2).knownToP4 = true;
					cout << "\nHere are your (known) cards:" << endl; P4.printHand(P4.name);
				}
			}

			if (playerTurn == 0) {
				cout << "\nSince this is the first turn, you can only draw a card. You'll get a choice next time you go!" << endl;
			}
			else {
				if (!knock) {
					cout << "\nWould you like to knock, eliminate a card from your hand, swap a card from your hand for the topmost card on the stack, or draw a card?" << endl;
				}
				else {
					cout << "\nWould you like to eliminate a card from your hand, swap a card from your hand for the topmost card on the stack, or draw a card?" << endl;
				}
				
				cout << "Keep in mind you can only eliminate a card if it matches the topmost card in the stack; if it doesn't, the card returns to your hand and you draw another card." << endl;

				if (!knock) {
					cout << "Also keep in mind that once you knock, the next round will be the final round; everyone goes one last time and once it is your turn again, all the cards are revealed and the player with the least amount of points wins." << endl;
					cout << "(Type \"K\", \"E\", \"S\", or \"D\", case sensitive.)" << endl;
				}
				else {
					cout << "(Type \"E\", \"S\", or \"D\", case sensitive.)" << endl;
				}
			
				if (isAI) { AI(knock, wait, playerTurn); } else { cin >> answer; } 
			}
			
			if (playerTurn == 0) { answer = "D"; DC++;}

			if (answerCompare(answer, "E")) { eliminateCard(Stack, Deck, knock, wait); EC++; }
			
			else if (answerCompare(answer, "S")) { swapCard(Stack, knock, wait); SC++; }

			else if (answerCompare(answer, "D")) { drawCard(Deck, Stack, knock, wait, P1, P2, P3, P4); DC++; }
			
			else {
				knock = true; cout << "\n" << name << " has knocked. This is the final round." << endl;
				turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
			}
			
			totalPoints = 0;
			
			for (int i = 0; i < Hand.size(); i++) {
				totalPoints += Hand.at(i).point;
			}

		}
};

void shuffleDeck(vector<Card>& Deck) {
	unsigned seed = time(0);
	shuffle(Deck.begin(), Deck.end(), default_random_engine(seed));
}

void distributeHand(Player& P1, Player& P2, Player& P3, Player& P4, vector<Card>& Deck) {
	vector<Card> Hand;

	for (int i = 0; i < 4; i++) {
		Hand.push_back(Deck.back()); Deck.pop_back();
	}
	P1.Hand = Hand; Hand.clear();

	for (int i = 0; i < 4; i++) {
		Hand.push_back(Deck.back()); Deck.pop_back();
	}
	P2.Hand = Hand; Hand.clear();

	for (int i = 0; i < 4; i++) {
		Hand.push_back(Deck.back()); Deck.pop_back();
	}
	P3.Hand = Hand; Hand.clear();

	for (int i = 0; i < 4; i++) {
		Hand.push_back(Deck.back()); Deck.pop_back();
	}
	P4.Hand = Hand; Hand.clear();
}

void printPoints(vector<Card>& Hand, int& totalPoints) {
	for (int i = 0; i < Hand.size(); i++) {
		cout << Hand.at(i).point;
		
		if (i < (Hand.size() - 2)) { cout << ", "; }
		
		else if (i < (Hand.size() - 1)) { cout << ", and "; }
		
		else {
			cout << " points, for a total of " << totalPoints;
			
			if (totalPoints == 1) { cout << " point." << endl; }
			
			else { cout << " points." << endl; } break;
		}
	}
}

void stats(Player& P1, Player& P2, Player& P3, Player& P4, int& playerTurn) {
	int TEC = 0; int TSC = 0; int TDC = 0; Player highest; vector<Player> Players{P1, P2, P3, P4};
	for (int i = 0; i < Players.size(); i++) {
		TEC += Players.at(i).EC;
		TSC += Players.at(i).SC;
		TDC += Players.at(i).DC;
	}
	
	cout << "\nStats:\n" << endl;
	cout << "Eliminations: " << TEC << endl;
	cout << "Swaps: " << TSC << endl;
	cout << "Draws: " << TDC << endl;
	cout << "Turns: " << playerTurn << endl;

	cout << "\nPer player:" << endl;

	cout << "\nEliminations:" << endl;
	for (int i = 1; i < Players.size(); i++) {
		highest = Players.at(i); int j = i - 1;
		while (j >= 0 && Players.at(j).EC < highest.EC) {
			Players.at(j + 1) = Players.at(j); j--;
		}
		Players.at(j + 1) = highest;
	}
	cout << "1. " << Players.at(0).name << ", " << Players.at(0).EC << " eliminations." << endl;
	cout << "2. " << Players.at(1).name << ", " << Players.at(1).EC << " eliminations." << endl;
	cout << "3. " << Players.at(2).name << ", " << Players.at(2).EC << " eliminations." << endl;
	cout << "4. " << Players.at(3).name << ", " << Players.at(3).EC << " eliminations." << endl;

	cout << "\nSwaps:" << endl;
	for (int i = 1; i < Players.size(); i++) {
		highest = Players.at(i); int j = i - 1;
		while (j >= 0 && Players.at(j).SC < highest.SC) {
			Players.at(j + 1) = Players.at(j); j--;
		}
		Players.at(j + 1) = highest;
	}
	cout << "1. " << Players.at(0).name << ", " << Players.at(0).SC << " swaps." << endl;
	cout << "2. " << Players.at(1).name << ", " << Players.at(1).SC << " swaps." << endl;
	cout << "3. " << Players.at(2).name << ", " << Players.at(2).SC << " swaps." << endl;
	cout << "4. " << Players.at(3).name << ", " << Players.at(3).SC << " swaps." << endl;
	
	cout << "\nDraws:" << endl;
	for (int i = 1; i < Players.size(); i++) {
		highest = Players.at(i); int j = i - 1;
		while (j >= 0 && Players.at(j).DC < highest.DC) {
			Players.at(j + 1) = Players.at(j); j--;
		}
		Players.at(j + 1) = highest;
	}
	cout << "1. " << Players.at(0).name << ", " << Players.at(0).DC << " draws." << endl;
	cout << "2. " << Players.at(1).name << ", " << Players.at(1).DC << " draws." << endl;
	cout << "3. " << Players.at(2).name << ", " << Players.at(2).DC << " draws." << endl;
	cout << "4. " << Players.at(3).name << ", " << Players.at(3).DC << " draws." << endl;
}

void tiebreaker(Player& P1, Player& P2, Player& P3, Player& P4, vector<Card>& Deck, int& tieToggle, int& playerTurn) {
	int count = 0; int start = 0; bool tie = false; vector<Player> Players{P1, P2, P3, P4}; Player lowest;

	for (int i = 1; i < Players.size(); i++) {
		lowest = Players.at(i); int j = i - 1;
		while (j >= 0 && Players.at(j).totalPoints > lowest.totalPoints) {
			Players.at(j + 1) = Players.at(j); j--;
		}
		Players.at(j + 1) = lowest;
	}
	
	for (int i = 0; i < Players.size() - 1; i++) {
		for (int j = i + 1; j < Players.size(); j++) {
			if (Players.at(i).totalPoints == Players.at(j).totalPoints) {
				if (count == 0) { start = i; } count++;
			}
		}
	}

	if (count != 0) { tie = true; tieToggle++; }

	switch (count) {
		case 1:
			cout << "\nIt appears that " << Players.at(start).name << " and " << Players.at(start + 1).name << " are tied for points!" << endl;
			cout << "\nIn order to mitigate that, the two tied players will draw another card, then total their points again." << endl;

			Deck.back().knownToP1 = true; Deck.back().knownToP2 = true;
			Deck.back().knownToP3 = true; Deck.back().knownToP4 = true;

			cout << "\n" << Players.at(start).name << " drew:" << endl;

			if (Players.at(start).name == "Player 1") {
				P1.Hand.push_back(Deck.back());
				printCard(Deck.back(), P1.name); Deck.pop_back();
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start).name == "Player 2") { 
				P2.Hand.push_back(Deck.back());
				printCard(Deck.back(), P2.name); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start).name == "Player 3") { 
				P3.Hand.push_back(Deck.back());
				printCard(Deck.back(), P3.name); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start).name == "Player 4") { 
				P4.Hand.push_back(Deck.back());
				printCard(Deck.back(), P4.name); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}

			Deck.back().knownToP1 = true; Deck.back().knownToP2 = true;
			Deck.back().knownToP3 = true; Deck.back().knownToP4 = true;

			cout << "\n" << Players.at(start + 1).name << " drew:" << endl;
			
			if (Players.at(start + 1).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); 
				printCard(Deck.back(), P1.name); Deck.pop_back();
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); 
				printCard(Deck.back(), P2.name); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); 
				printCard(Deck.back(), P3.name); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); 
				printCard(Deck.back(), P4.name); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}

			break;
	
		case 2:
			cout << "\nIt appears that Players " << start << ", " << start + 1 << ", and " << start + 2 << " are tied for points!" << endl;
			cout << "\nIn order to mitigate that, the three tied players will draw another card, then total their points again." << endl;
			
			if (Players.at(start).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}
			
			if (Players.at(start + 1).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}
	
			if (Players.at(start + 2).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start + 2).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start + 2).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start + 2).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}

			break;
	
		case 3:
			cout << "\nIt appears that all the players tied for points!" << endl;
			cout << "\nIn order to mitigate that, they will all draw another card, then total their points again." << endl;
			
			if (Players.at(start).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}
	
			if (Players.at(start + 1).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start + 1).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}

			if (Players.at(start + 2).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start + 2).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start + 2).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start + 2).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}
			
			if (Players.at(start + 3).name == "Player 1") { 
				P1.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P1.totalPoints += P1.Hand.back().point;
			}
			if (Players.at(start + 3).name == "Player 2") { 
				P2.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P2.totalPoints += P2.Hand.back().point;
			}
			if (Players.at(start + 3).name == "Player 3") { 
				P3.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P3.totalPoints += P3.Hand.back().point;
			}
			if (Players.at(start + 3).name == "Player 4") { 
				P4.Hand.push_back(Deck.back()); Deck.pop_back(); 
				P4.totalPoints += P4.Hand.back().point;
			}

			break;
	
		default:
			break;
	}

	if (tie) { 
		tiebreaker(P1, P2, P3, P4, Deck, tieToggle, playerTurn); 
	}

	else {
		if (tieToggle != 0) {
			cout << "\nNow that the tie has been broken, let's add up the totals again." << endl;
			cout << "\nPlayer 1 has "; printPoints(P1.Hand, P1.totalPoints);
			cout << "\nPlayer 2 has "; printPoints(P2.Hand, P2.totalPoints);
			cout << "\nPlayer 3 has "; printPoints(P3.Hand, P3.totalPoints);
			cout << "\nPlayer 4 has "; printPoints(P4.Hand, P4.totalPoints);
		}

		for (int i = 1; i < Players.size(); i++) {
			lowest = Players.at(i); int j = i - 1;
			while (j >= 0 && Players.at(j).totalPoints > lowest.totalPoints) {
				Players.at(j + 1) = Players.at(j); j--;
			}
			Players.at(j + 1) = lowest;
		}
		
		cout << "\nIn first place, we have " << Players.at(0).name << " with " << Players.at(0).totalPoints; 
		if (Players.at(0).totalPoints == 1) { cout << " point." << endl; }
		else { cout << " points." << endl; }
		
		cout << "\nIn second place, we have " << Players.at(1).name << " with " << Players.at(1).totalPoints; 
		if (Players.at(1).totalPoints == 1) { cout << " point." << endl; }
		else { cout << " points." << endl; }
		
		cout << "\nIn third place, we have " << Players.at(2).name << " with " << Players.at(2).totalPoints; 
		if (Players.at(2).totalPoints == 1) { cout << " point." << endl; }
		else { cout << " points." << endl; }
		
		cout << "\nAnd in fourth place, we have " << Players.at(3).name << " with " << Players.at(3).totalPoints; 
		if (Players.at(3).totalPoints == 1) { cout << " point." << endl; }
		else { cout << " points." << endl; }

		cout << "\nTherefore, our winner is " << Players.at(0).name << "!" << endl;
		cout << "\nThank you for playing, I hope you had fun!" << endl;

		cout << "\nIf you're interested, we have the stats from this game listed below." << endl;
		stats(P1, P2, P3, P4, playerTurn);
	}
}

void winner(Player& P1, Player& P2, Player& P3, Player& P4, vector<Card>& Deck, int& tieToggle, int& playerTurn) {
	Player lowest; vector<Player> Players{P1, P2, P3, P4};

	cout << "\nNow that the game is over, let's add up the totals." << endl;
	cout << "\nPlayer 1 has "; printPoints(P1.Hand, P1.totalPoints);
	cout << "\nPlayer 2 has "; printPoints(P2.Hand, P2.totalPoints);
	cout << "\nPlayer 3 has "; printPoints(P3.Hand, P3.totalPoints);
	cout << "\nPlayer 4 has "; printPoints(P4.Hand, P4.totalPoints);

	tiebreaker(P1, P2, P3, P4, Deck, tieToggle, playerTurn);
}

void finalRound(int& wait, int& playerTurn, int& position1, int& position2, string& SorM, bool& knock, vector<Card>& Deck, vector<Card>& Stack, Player& P1, Player& P2, Player& P3, Player& P4) {
	for (int i = 0; i < 3; i++) {
		cout << "\nTurn " << playerTurn + 1 << endl;
		switch (playerTurn % 4) {
			case 0:
				cout << "\nPlayer 1's final turn:" << endl;
				P1.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 1:
				cout << "\nPlayer 2's final turn:" << endl;
				P2.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 2:
				cout << "\nPlayer 3's final turn:" << endl;
				P3.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 3:
				cout << "\nPlayer 4's final turn:" << endl;
				P4.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			default:
				break;
		}
		playerTurn++;
	}
}

int main() {
	Card TwoDi; Card ThreeDi; Card FourDi; Card FiveDi; Card SixDi; Card SevenDi; Card EightDi; Card NineDi; Card TenDi; Card JackDi; Card QueenDi; Card KingDi; Card AceDi; Card TwoCl; Card ThreeCl; Card FourCl; Card FiveCl; Card SixCl; Card SevenCl; Card EightCl; Card NineCl; Card TenCl; Card JackCl; Card QueenCl; Card KingCl; Card AceCl; Card TwoHe; Card ThreeHe; Card FourHe; Card FiveHe; Card SixHe; Card SevenHe; Card EightHe; Card NineHe; Card TenHe; Card JackHe; Card QueenHe; Card KingHe; Card AceHe; Card TwoSp; Card ThreeSp; Card FourSp; Card FiveSp; Card SixSp; Card SevenSp; Card EightSp; Card NineSp; Card TenSp; Card JackSp; Card QueenSp; Card KingSp; Card AceSp;

	TwoDi.name = "2Di"; ThreeDi.name = "3Di"; FourDi.name = "4Di"; FiveDi.name = "5Di"; SixDi.name = "6Di"; SevenDi.name = "7Di"; EightDi.name = "8Di"; NineDi.name = "9Di"; TenDi.name = "10Di"; JackDi.name = "JackDi"; QueenDi.name = "QueenDi"; KingDi.name = "KingDi"; AceDi.name = "AceDi"; TwoCl.name = "2Cl"; ThreeCl.name = "3Cl"; FourCl.name = "4Cl"; FiveCl.name = "5Cl"; SixCl.name = "6Cl"; SevenCl.name = "7Cl"; EightCl.name = "8Cl"; NineCl.name = "9Cl"; TenCl.name = "10Cl"; JackCl.name = "JackCl"; QueenCl.name = "QueenCl"; KingCl.name = "KingCl"; AceCl.name = "AceCl"; TwoHe.name = "2He"; ThreeHe.name = "3He"; FourHe.name = "4He"; FiveHe.name = "5He"; SixHe.name = "6He"; SevenHe.name = "7He"; EightHe.name = "8He"; NineHe.name = "9He"; TenHe.name = "10He"; JackHe.name = "JackHe"; QueenHe.name = "QueenHe"; KingHe.name = "KingHe"; AceHe.name = "AceHe"; TwoSp.name = "2Sp"; ThreeSp.name = "3Sp"; FourSp.name = "4Sp"; FiveSp.name = "5Sp"; SixSp.name = "6Sp"; SevenSp.name = "7Sp"; EightSp.name = "8Sp"; NineSp.name = "9Sp"; TenSp.name = "10Sp"; JackSp.name = "JackSp"; QueenSp.name = "QueenSp"; KingSp.name = "KingSp"; AceSp.name = "AceSp";
	
	TwoDi.suit = "♢"; ThreeDi.suit = "♢"; FourDi.suit = "♢"; FiveDi.suit = "♢"; SixDi.suit = "♢"; SevenDi.suit = "♢"; EightDi.suit = "♢"; NineDi.suit = "♢"; TenDi.suit = "♢"; JackDi.suit = "♢"; QueenDi.suit = "♢"; KingDi.suit = "♢"; AceDi.suit = "♢"; TwoCl.suit = "♣︎"; ThreeCl.suit = "♣︎"; FourCl.suit = "♣︎"; FiveCl.suit = "♣︎"; SixCl.suit = "♣︎"; SevenCl.suit = "♣︎"; EightCl.suit = "♣︎"; NineCl.suit = "♣︎"; TenCl.suit = "♣︎"; JackCl.suit = "♣︎"; QueenCl.suit = "♣︎"; KingCl.suit = "♣︎"; AceCl.suit = "♣︎"; TwoHe.suit = "♡"; ThreeHe.suit = "♡"; FourHe.suit = "♡"; FiveHe.suit = "♡"; SixHe.suit = "♡"; SevenHe.suit = "♡"; EightHe.suit = "♡"; NineHe.suit = "♡"; TenHe.suit = "♡"; JackHe.suit = "♡"; QueenHe.suit = "♡"; KingHe.suit = "♡"; AceHe.suit = "♡"; TwoSp.suit = "♠︎"; ThreeSp.suit = "♠︎"; FourSp.suit = "♠︎"; FiveSp.suit = "♠︎"; SixSp.suit = "♠︎"; SevenSp.suit = "♠︎"; EightSp.suit = "♠︎"; NineSp.suit = "♠︎"; TenSp.suit = "♠︎"; JackSp.suit = "♠︎"; QueenSp.suit = "♠︎"; KingSp.suit = "♠︎"; AceSp.suit = "♠︎";
	
	TwoDi.point = 2; ThreeDi.point = 3; FourDi.point = 4; FiveDi.point = 5; SixDi.point = 6; SevenDi.point = 7; EightDi.point = 8; NineDi.point = 9; TenDi.point = 10; JackDi.point = 10; QueenDi.point = 10; KingDi.point = 0; AceDi.point = 1; TwoCl.point = 2; ThreeCl.point = 3; FourCl.point = 4; FiveCl.point = 5; SixCl.point = 6; SevenCl.point = 7; EightCl.point = 8; NineCl.point = 9; TenCl.point = 10; JackCl.point = 10; QueenCl.point = 10; KingCl.point = 10; AceCl.point = 1; TwoHe.point = 2; ThreeHe.point = 3; FourHe.point = 4; FiveHe.point = 5; SixHe.point = 6; SevenHe.point = 7; EightHe.point = 8; NineHe.point = 9; TenHe.point = 10; JackHe.point = 10; QueenHe.point = 10; KingHe.point = 0; AceHe.point = 1; TwoSp.point = 2; ThreeSp.point = 3; FourSp.point = 4; FiveSp.point = 5; SixSp.point = 6; SevenSp.point = 7; EightSp.point = 8; NineSp.point = 9; TenSp.point = 10; JackSp.point = 10; QueenSp.point = 10; KingSp.point = 10; AceSp.point = 1;
	
	TwoDi.power = 2; ThreeDi.power = 3; FourDi.power = 4; FiveDi.power = 5; SixDi.power = 6; SevenDi.power = 7; EightDi.power = 8; NineDi.power = 9; TenDi.power = 10; JackDi.power = 11; QueenDi.power = 12; KingDi.power = 13; AceDi.power = 1; TwoCl.power = 2; ThreeCl.power = 3; FourCl.power = 4; FiveCl.power = 5; SixCl.power = 6; SevenCl.power = 7; EightCl.power = 8; NineCl.power = 9; TenCl.power = 10; JackCl.power = 11; QueenCl.power = 12; KingCl.power = 13; AceCl.power = 1; TwoHe.power = 2; ThreeHe.power = 3; FourHe.power = 4; FiveHe.power = 5; SixHe.power = 6; SevenHe.power = 7; EightHe.power = 8; NineHe.power = 9; TenHe.power = 10; JackHe.power = 11; QueenHe.power = 12; KingHe.power = 13; AceHe.power = 1; TwoSp.power = 2; ThreeSp.power = 3; FourSp.power = 4; FiveSp.power = 5; SixSp.power = 6; SevenSp.power = 7; EightSp.power = 8; NineSp.power = 9; TenSp.power = 10; JackSp.power = 11; QueenSp.power = 12; KingSp.power = 13; AceSp.power = 1;

	Player P1; Player P2; Player P3; Player P4;
	P1.name = "Player 1"; P2.name = "Player 2"; P3.name = "Player 3"; P4.name = "Player 4";

	vector<Card> Deck{TwoDi, ThreeDi, FourDi, FiveDi, SixDi, SevenDi, EightDi, NineDi, TenDi, JackDi, QueenDi, KingDi, AceDi, TwoCl, ThreeCl, FourCl, FiveCl, SixCl, SevenCl, EightCl, NineCl, TenCl, JackCl, QueenCl, KingCl, AceCl, TwoHe, ThreeHe, FourHe, FiveHe, SixHe, SevenHe, EightHe, NineHe, TenHe, JackHe, QueenHe, KingHe, AceHe, TwoSp, ThreeSp, FourSp, FiveSp, SixSp, SevenSp, EightSp, NineSp, TenSp, JackSp, QueenSp, KingSp, AceSp};

	vector<Player> Players{P1, P2, P3, P4}; vector<Card> Stack; srand(time(NULL));

	bool knock = false; int tieToggle = 0; int playerTurn = 0; int wait = 0; int position1 = 0; int position2 = 0;  string SorM = "";

	for (int i = 0; i < Deck.size(); i++) {
		Deck.at(i).knownToP1 = false;
		Deck.at(i).knownToP2 = false;
		Deck.at(i).knownToP3 = false;
		Deck.at(i).knownToP4 = false;
	}

	shuffleDeck(Deck); distributeHand(P1, P2, P3, P4, Deck);

	cout << "\nHello, and welcome to Switch!" << endl;

	cout << "\nYou can either play single player, against AI players, or hotseat multiplayer, where everyone takes turns on this computer. (Type \"S\" or \"M\".)" << endl;

	cin >> SorM;
	
	if (answerCompare(SorM, "S")) { P2.isAI = true; P3.isAI = true; P4.isAI = true; }

	while (!knock) {
		cout << "\nTurn " << playerTurn + 1 << endl;
		switch (playerTurn % 4) {
			case 0:
				cout << "\nPlayer 1's turn:" << endl;
				
				P1.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 1:
				cout << "\nPlayer 2's turn:" << endl;

				P2.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 2:
				cout << "\nPlayer 3's turn:" << endl;

				P3.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 3:
				cout << "\nPlayer 4's turn:" << endl;

				P4.turn(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			default:
				break;
		}
		playerTurn++;
	}

	finalRound(wait, playerTurn, position1, position2, SorM, knock, Deck, Stack, P1, P2, P3, P4);

	winner(P1, P2, P3, P4, Deck, tieToggle, playerTurn);
	
	return 0;
}