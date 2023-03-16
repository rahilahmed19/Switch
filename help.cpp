#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

class Player {
	public:
		int EC; string name;
};

int main() {
	Player P1; Player P2; Player P3; Player P4; Player lowest; 
	
	P1.name = "Player 1"; P2.name = "Player 2"; P3.name = "Player 3"; P4.name = "Player 4";
	P1.EC = 4; P2.EC = 9; P3.EC = 6; P4.EC = 1;
	
	vector<Player> Players{P1, P2, P3, P4};
	
	srand(time(NULL));

	for (int i = 1; i < Players.size(); i++) {
		lowest = Players.at(i); int j = i - 1;
		while (j >= 0 && Players.at(j).EC < lowest.EC) {
			Players.at(j + 1) = Players.at(j); j--;
		}
		Players.at(j + 1) = lowest;
	}

	cout << "\nIn first place, we have " << Players.at(0).name << " with " << Players.at(0).EC << " eliminations." << endl;
	
	cout << "\nIn second place, we have " << Players.at(1).name << " with " << Players.at(1).EC << " eliminations." << endl;
	
	cout << "\nIn third place, we have " << Players.at(2).name << " with " << Players.at(2).EC << " eliminations." << endl;
	
	cout << "\nAnd in fourth place, we have " << Players.at(3).name << " with " << Players.at(3).EC << " eliminations.\n" << endl;

  	return 0;
}