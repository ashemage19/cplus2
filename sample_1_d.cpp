#include <iostream>
using namespace std;
void playgame(){
	cout << "Play game called";
}
void loadgame(){
	cout << "Load game called";
}
void playmultiplayer(){
	cout << "Play multiplayer called";
}
int main (){
	int input;
	cout<<"1. Play game\n";
	cout<<"2. Load game\n";
	cout<<"3. Play multiplayer\n";
	cout<<"4. Exit\n";
	cout<<"Selection: ";
	cin>> input;
	switch (input){
		case 1:
			playgame();
			break;
		case 2:
			loadgame();
			break;
		case 3:
			playmultiplayer();
			break;
		case 4:
			cout<<"Thank you for playing!\n";
		default:
			cout<<"Error, bad input, quitting\n";
	}
	cin.get();
}
