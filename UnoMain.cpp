#include <iostream>
#include "Uno.hpp"
#include "UnoDeck.hpp"
#include "UnoPlayer.hpp"
#include <math.h>
using namespace std;

int main(){
	int players = 0;
	bool uno = false;
	bool unoOut = false;
	bool oneLeft = false;
	cout<<"# of players has to be two or more" <<endl;
	cin >> players;
	if(players < 2){
		cout<<"Try again"<<endl;
	}
	else{
		//starts the game
		UnoDeck *hand = new UnoDeck();
		hand->deal();

		//if(hand->player->)

		if(unoOut == true){
			cout<<hand->player << " is out of the game!"<<endl;
			delete hand;
			players--;

			if(players == 1){
				oneLeft = true;
			}

			if(oneLeft == true){
				cout<<"Game over, you lost"<<endl;
			}
		}



	}


	return 0;
}