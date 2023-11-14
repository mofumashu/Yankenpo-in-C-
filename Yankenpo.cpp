#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;


class Yankenpo{
    private:
        int select;
        int randNumber = rand() % 3 + 1; //Generates a random number from 0 to 2 then it adds one so it can generate numbers from 1 to 3 respectively. 
    
    public:
        void Start(){
            cout << "ROCK, PAPER, SCISSORS - GAME" << endl;
            cout << "1.- Rock" << endl; cout << "2.- Paper" << endl; cout << "3.- Scissors" << endl;
            cin >> select;

            cout << "\nYou chose: ";
            Choice(select);
            cout << "Computer chose: "; 
            Choice(randNumber);


            if (select == randNumber) {
                cout << "\nIT'S A TIE\n" << endl;
            } //This shows a tie if both numbers are the same
            else if ((randNumber == 1 && select == 2) || (randNumber == 2 && select == 3) || (randNumber == 3 && select == 1)) {
                cout << "\nYOU WIN\n" << endl;
            } //This shows a win for the player if the selected number beats the number selected by the computer, knowing each number means yankenpo respectively.
            else {
                cout << "\nYOU LOST\n" << endl;
            }//In a contrary case, if the computer selects a number that beats the number of the player then the computer wins.
        }//Starts the game

        void Choice(int choice){
            switch(choice){
                case 1: cout << "Rock!" << endl;
                        break;
                case 2: cout << "Paper!" << endl;
                        break;
                case 3: cout << "Scissors!" << endl;
                        break;
                default: cout << "This choice doesn't exist.\n" << endl;
                        break;
            }
        }//Shows the choice the player and the computer had.
};


int main(){
    int Exit  = 1;

    while(Exit == 1){
        system("cls");

        Yankenpo Game;
        Game.Start();

        cout << "Do you want to continue playing?" << endl;
        cout << "1.- Yes | 2.- No" << endl;
        cin >> Exit;
    }//This while loops the game if Exit is equal to 1, if a different number is pressed then the game stops and closes.

    system("exit");
    return 0;
}
