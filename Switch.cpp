#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>
#include <random>
#include <unistd.h>
#include <time.h>
using namespace std;

// Main

class Card {
	public:
		string name, suit; int point, power; // Only exists for the Power Card function, to help differentiate between the face cards
		bool knownToYou, knownToP1, knownToP2, knownToP3, knownToP4 = false;
};

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
	cout << "|   " << suit << "   |  " << endl;
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
		Card Temp = Stack.at(i - 1); int rank = Temp.power;
		Card Temp2 = Stack.at(i); int rank2 = Temp.power; string suit2 = Temp.suit;
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

class Player {
	public:
		vector<Card> Hand; string name, answer = ""; int totalPoints, position, playerPosition, player1, player2, card1, card2, choices, ToF /* Three or four, for before or after knock */, drawAnswer = 0; bool isAI = false;

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
		
		void switchNT(int& player, int& card, Player& P1, Player& P2, Player& P3, Player& P4) {
			Card Temp;
			switch (player) {
				case 1:
					Temp = P1.Hand.at(card); printCard(Temp, P1.name); 
					
					if (name == "Player 2") { P1.Hand.at(card).knownToP2 = true; }

					if (name == "Player 3") { P1.Hand.at(card).knownToP3 = true; }

					if (name == "Player 4") { P1.Hand.at(card).knownToP4 = true; }
					break;
				
				case 2:
					Temp = P2.Hand.at(card); printCard(Temp, P2.name); 
					
					if (name == "Player 1") { P1.Hand.at(card).knownToP1 = true; }

					if (name == "Player 3") { P1.Hand.at(card).knownToP3 = true; }

					if (name == "Player 4") { P1.Hand.at(card).knownToP4 = true; }
					break;
				
				case 3:
					Temp = P3.Hand.at(card); printCard(Temp, P3.name); 
					
					if (name == "Player 1") { P1.Hand.at(card).knownToP1 = true; }
					
					if (name == "Player 2") { P1.Hand.at(card).knownToP2 = true; }
					
					if (name == "Player 4") { P1.Hand.at(card).knownToP4 = true; }
					break;
				
				case 4:
					Temp = P4.Hand.at(card); printCard(Temp, P4.name); 

					if (name == "Player 1") { P1.Hand.at(card).knownToP1 = true; }

					if (name == "Player 2") { P1.Hand.at(card).knownToP2 = true; }

					if (name == "Player 3") { P1.Hand.at(card).knownToP3 = true; }
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
				if (Temp.knownToP1) {
					Hand.at(position).knownToP1 = true;
				}
			}

			if (name == "Player 2") {
				if (Temp.knownToP2) {
					Hand.at(position).knownToP2 = true;
				}
			}

			if (name == "Player 3") {
				if (Temp.knownToP3) {
					Hand.at(position).knownToP3 = true;
				}
			}

			if (name == "Player 4") {
				if (Temp.knownToP4) {
					Hand.at(position).knownToP4 = true;
				}
			}
		}

		void powerCard(int& power, int& wait, bool& knock, Player& P1, Player& P2, Player& P3, Player& P4) {
			Card Temp;
			switch (power) {
				case 7:
					cout << "\nYou can look at one of your own cards. Which one would you like to check? (Type the position of the card as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << (position + 1) << endl;
					} 
					
					else { cin >> position; position--; }

					Temp = Hand.at(position); selfKnown(Hand.at(position), name);

					cout << "\nThe card is: " << endl; printCard(Temp, name);
					break;
				
				case 8:
					cout << "\nYou can look at one of your own cards. Which one would you like to check? (Type the position of the card as a digit.)" << endl;
					
					if (isAI) { 
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << (position + 1) << endl;
					} 
					
					else { cin >> position; position--; }

					Temp = Hand.at(position); selfKnown(Hand.at(position), name);

					cout << "\nThe card is: " << endl; printCard(Temp, name);
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
						wait = rand() % 3 + 1; sleep(wait);
						cout << (position + 1) << endl;
					} 
					else { cin >> position; position--; }
					
					cout << "\nThe card is: " << endl;
					switchNT(playerPosition, position, P1, P2, P3, P4);
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
						cout << "\n" << name << " continues to think." << endl;
						wait = rand() % 5 + 3; sleep(wait);
						cout << (position + 1) << endl;
					} 
					else { cin >> position; position--; }
					
					cout << "\nThe card is: " << endl;
					switchNT(playerPosition, position, P1, P2, P3, P4);
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
						wait = rand() % 3 + 1; sleep(wait);
						cout << card1 << endl;
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
						wait = rand() % 3 + 1; sleep(wait);
						cout << card2 << endl;
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
			Stack.push_back(Hand.at(position)); Hand.at(position) = Temp; cout << endl; 
			
			Stack.back().knownToP1 = true; Stack.back().knownToP2 = true;
			Stack.back().knownToP3 = true; Stack.back().knownToP4 = true;
			
			cout << "\nStack:" << endl; printStack(Stack, name);
		}

		void drawCard(vector<Card>& Deck, vector<Card>& Stack, bool& knock, int& wait, Player& P1, Player& P2, Player& P3, Player& P4) {
			cout << "\nYou drew " << Deck.back().name << " (" << Deck.back().point << "). Do you put the card in your hand, or onto the stack? (Type \"H\" or \"S\".) " << endl;
			
			if (isAI) {
				cout << "\n" << name << " is thinking. (again.)" << endl; wait = rand() % 5 + 3; sleep(wait); 
				drawAnswer = rand() % 2; if (drawAnswer) { answer = "H"; } else { answer = "S"; }
				cout << answer << endl;
			} 
			
			else { cin >> answer; }
			
			if (answer == "H") {
				cout << "\nChoose which one of your cards to swap it out with. (Type the position of the card as a digit.)" << endl;

				if (isAI) {
					cout << "\n" << name << " is thinking. For the third time." << endl; wait = rand() % 5 + 3; sleep(wait); 
					position = rand() % Hand.size();
				}
				
				else { cin >> position; position--; }

				Stack.push_back(Hand.at(position)); selfKnown(Hand.at(position), name);
				Hand.at(position) = Deck.back(); Deck.pop_back(); 
				selfKnown(Hand.at(position), name); cout << endl;
			}
			else {
				position = rand() % Hand.size(); playerPosition = rand() % 4 + 1;
				player1 = rand() % 4 + 1; card1 = rand() % Hand.size();
				player2 = rand() % 4 + 1; card2 = rand() % Hand.size();
				
				powerCard(Deck.back().power, wait, knock, P1, P2, P3, P4);
				Stack.push_back(Deck.back()); Deck.pop_back();
			}
			Stack.back().knownToP1 = true; Stack.back().knownToP2 = true;
			Stack.back().knownToP3 = true; Stack.back().knownToP4 = true;
			
			cout << "\nStack:" << endl; printStack(Stack, name);
		}

		void AI(bool& knock, int& wait) { // Send help
			// Easy
			cout << "\n" << name << " is thinking." << endl;
			wait = rand() % 8 + 3; sleep(wait);

			if (!knock) { ToF = rand() % 4 + 1; } else { ToF = rand() % 3 + 1; }

			switch (ToF) {
				case 1:
					answer = "E"; cout << answer << endl;
					break;
				
				case 2:
					answer = "S"; cout << answer << endl; 
					break;
				
				case 3:
					answer = "D"; cout << answer << endl;
					break;
				
				case 4:
					answer = "K"; cout << answer << endl;
					break;
				
				default:
					AI(knock, wait);
					break;
			}
		}

		void turn(int& wait, bool& knock, vector<Card>& Deck, vector<Card>& Stack, Player& P1, Player& P2, Player& P3, Player& P4) {
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
			
			if (isAI) { AI(knock, wait); } 
			
			else { cin >> answer; }

			if (answer == "E") { eliminateCard(Stack, Deck, knock, wait); }
			
			else if (answer == "S") { swapCard(Stack, knock, wait); }

			else if (answer == "D") { drawCard(Deck, Stack, knock, wait, P1, P2, P3, P4); }
			
			else {
				knock = true; cout << "\n" << name << " has knocked. This is the final round." << endl;
				turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
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

void winner(Player& P1, Player& P2, Player& P3, Player& P4) {
	Player lowest; vector<Player> Players{P1, P2, P3, P4};

	cout << "\nNow that the game is over, let's add up the totals." << endl;
	cout << "\nPlayer 1 has "; printPoints(P1.Hand, P1.totalPoints);
	cout << "\nPlayer 2 has "; printPoints(P2.Hand, P2.totalPoints);
	cout << "\nPlayer 3 has "; printPoints(P3.Hand, P3.totalPoints);
	cout << "\nPlayer 4 has "; printPoints(P4.Hand, P4.totalPoints);

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
}

void finalRound(int& playerTurn, int& wait, bool& knock, vector<Card>& Deck, vector<Card>& Stack, Player& P1, Player& P2, Player& P3, Player& P4) {
	for (int i = 0; i < 3; i++) {
		switch (playerTurn % 4) {
			case 0:
				cout << "\nPlayer 1's final turn:" << endl;
				P1.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 1:
				cout << "\nPlayer 2's final turn:" << endl;
				P2.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 2:
				cout << "\nPlayer 3's final turn:" << endl;
				P3.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 3:
				cout << "\nPlayer 4's final turn:" << endl;
				P4.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
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
	
	// TwoDi.knownToYou = true; ThreeDi.knownToYou = true; FourDi.knownToYou = true; FiveDi.knownToYou = true; SixDi.knownToYou = true; SevenDi.knownToYou = true; EightDi.knownToYou = true; NineDi.knownToYou = true; TenDi.knownToYou = true; JackDi.knownToYou = true; QueenDi.knownToYou = true; KingDi.knownToYou = true; AceDi.knownToYou = true; TwoCl.knownToYou = true; ThreeCl.knownToYou = true; FourCl.knownToYou = true; FiveCl.knownToYou = true; SixCl.knownToYou = true; SevenCl.knownToYou = true; EightCl.knownToYou = true; NineCl.knownToYou = true; TenCl.knownToYou = true; JackCl.knownToYou = true; QueenCl.knownToYou = true; KingCl.knownToYou = true; AceCl.knownToYou = true; TwoHe.knownToYou = true; ThreeHe.knownToYou = true; FourHe.knownToYou = true; FiveHe.knownToYou = true; SixHe.knownToYou = true; SevenHe.knownToYou = true; EightHe.knownToYou = true; NineHe.knownToYou = true; TenHe.knownToYou = true; JackHe.knownToYou = true; QueenHe.knownToYou = true; KingHe.knownToYou = true; AceHe.knownToYou = true; TwoSp.knownToYou = true; ThreeSp.knownToYou = true; FourSp.knownToYou = true; FiveSp.knownToYou = true; SixSp.knownToYou = true; SevenSp.knownToYou = true; EightSp.knownToYou = true; NineSp.knownToYou = true; TenSp.knownToYou = true; JackSp.knownToYou = true; QueenSp.knownToYou = true; KingSp.knownToYou = true; AceSp.knownToYou = true;

	Player P1; Player P2; Player P3; Player P4;
	P1.name = "Player 1"; P2.name = "Player 2"; P3.name = "Player 3"; P4.name = "Player 4";

	vector<Card> Deck{TwoDi, ThreeDi, FourDi, FiveDi, SixDi, SevenDi, EightDi, NineDi, TenDi, JackDi, QueenDi, KingDi, AceDi, TwoCl, ThreeCl, FourCl, FiveCl, SixCl, SevenCl, EightCl, NineCl, TenCl, JackCl, QueenCl, KingCl, AceCl, TwoHe, ThreeHe, FourHe, FiveHe, SixHe, SevenHe, EightHe, NineHe, TenHe, JackHe, QueenHe, KingHe, AceHe, TwoSp, ThreeSp, FourSp, FiveSp, SixSp, SevenSp, EightSp, NineSp, TenSp, JackSp, QueenSp, KingSp, AceSp};

	vector<Player> Players{P1, P2, P3, P4}; vector<Card> Stack; srand(time(NULL));

	bool knock = false; int playerTurn, wait = 0; string SorM = "";

	for (int i = 0; i < Deck.size(); i++) {
		Deck.at(i).knownToP1 = false;
		Deck.at(i).knownToP2 = false;
		Deck.at(i).knownToP3 = false;
		Deck.at(i).knownToP4 = false;
	}

	shuffleDeck(Deck); distributeHand(P1, P2, P3, P4, Deck);

	// Player lmao; lmao.Hand.assign(Deck.begin(), Deck.end()); lmao.printHand();

	cout << "\nHello, and welcome to Switch!" << endl;

	cout << "\nYou can either play single player, against AI players, or hotseat multiplayer, where everyone takes turns on this computer. (Type \"S\" or \"M\".)" << endl;

	cin >> SorM;

	if (SorM == "S") { P2.isAI = true; P3.isAI = true; P4.isAI = true; }

	cout << "\nPick which two cards you would like to look at from your hand. (Type the position of the cards as a digit, with a space between them.)" << endl;

	int position1, position2; cin >> position1 >> position2; position1--; position2--;

	P1.Hand.at(position1).knownToP1 = true; P1.Hand.at(position2).knownToP1 = true;

	for (int i = 0; i < P1.Hand.size(); i++) {
		if (i == position1 || i == position2) {
			continue;
		}
		else {
			P1.Hand.at(i).knownToP1 = false;
		}
	}

	cout << "\nHere are your (known) cards:\n" << endl; P1.printHand(P1.name);

	while (!knock) {
		switch (playerTurn % 4) {
			case 0:
				cout << "\nPlayer 1's turn:" << endl;
				P1.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 1:
				cout << "\nPlayer 2's turn:" << endl;
				P2.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 2:
				cout << "\nPlayer 3's turn:" << endl;
				P3.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			case 3:
				cout << "\nPlayer 4's turn:" << endl;
				P4.turn(wait, knock, Deck, Stack, P1, P2, P3, P4);
				break;
			
			default:
				break;
		}
		playerTurn++;
	}

	finalRound(playerTurn, wait, knock, Deck, Stack, P1, P2, P3, P4);

	winner(P1, P2, P3, P4);
	
	return 0;
}