#include <iostream>
#include <time.h>
using namespace std;

int main() {
	string name; bool knownToP1, knownToP2, knownToP3, knownToP4, knownToYou = false;

void switchRankStart(Card& Temp) {
	int power = Temp.power; string point;
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

void switchRankEnd(Card& Temp) {
	int power = Temp.power; string point;
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

void printCard(Card& Temp) {
	int rank = Temp.power; string suit = Temp.suit;
	cout << " ———————   " << endl;
	if (Temp.power >= 10 || Temp.power == 1) {
		switchRankStart(Temp); cout << endl;
	}
	else {
		cout << "|" << rank << "      |  " << endl;
	}
	cout << "|       |" << endl;
	cout << "|   " << suit << "   |  " << endl;
	cout << "|       |" << endl;
	if (Temp.power >= 10 || Temp.power == 1) {
		switchRankEnd(Temp); cout << endl;
	}
	else {
		cout << "|      " << rank << "|  " << endl;
	}
	cout << " ———————   " << endl;
}

void printStack(vector<Card>& Stack) {
	if (Stack.size() <= 1) { printCard(Stack.at(0)); }
	else {
		int i = Stack.size(); i--;
		Card Temp = Stack.at(i - 1); int rank = Temp.power;
		Card Temp2 = Stack.at(i); int rank2 = Temp.power; string suit2 = Temp.suit;
		cout << " ——————— " << endl;
		switchRankStart(Temp); cout << endl;
		cout << "|  ———————   " << endl;
		cout << "| "; switchRankStart(Temp2); cout << endl;
		cout << "| |       |  " << endl;
		cout << "| |   " << suit2 << "   |" << endl;
		cout << " —|       |  " << endl;
		cout << "  "; switchRankEnd(Temp2); cout << endl;
		cout << "   ———————   " << endl;
	}
}

void printHand() {
	if (Hand.size() <= 1) { printCard(Hand.at(0)); }
	
	else {
		Card Temp; int rank = Temp.power; string suit = Temp.suit;
		for (int i = 0; i < Hand.size(); i++) { // Line 1
			cout << " ———————   ";
			if (i == Hand.size() - 1) { cout << endl; }
		}
		
		for (int i = 0; i < Hand.size(); i++) { // Line 2
			Temp = Hand.at(i); rank = Temp.power;
			if (Temp.knownToYou) {
				switchRankStart(Temp);
			}
			else {
				cout << "|?      |  ";
			}
			if (i == Hand.size() - 1) { cout << endl; }
		}
		
		for (int i = 0; i < Hand.size(); i++) { // Line 3
			cout << "|       |  ";
			if (i == Hand.size() - 1) { cout << endl; }
		}
		
		for (int i = 0; i < Hand.size(); i++) { // Line 4
			Temp = Hand.at(i); suit = Temp.suit;
			if (Temp.knownToYou) {
				cout << "|   " << suit << "   |  ";
			}
			else {
				cout << "|   ?   |  ";
			}
			if (i == Hand.size() - 1) { cout << endl; }
		}
		
		for (int i = 0; i < Hand.size(); i++) { // Line 5
			cout << "|       |  ";
			if (i == Hand.size() - 1) { cout << endl; }
		}
		
		for (int i = 0; i < Hand.size(); i++) { // Line 6
			Temp = Hand.at(i); rank = Temp.power;
			if (Temp.knownToYou) {
					switchRankEnd(Temp);
			}
			else {
				cout << "|      ?|  ";
			}
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

  	return 0;
}