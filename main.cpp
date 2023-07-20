#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main() {

    srand((unsigned int) time(nullptr));
    int randomNumber = (rand() % 3) + 1;
    cout << "###########################################\n";
    cout << "#                                         #\n";
    cout << "#     WELCOME TO ROCK PAPER SCISSORS!     #\n";
    cout << "#                                         #\n";
    cout << "###########################################\n\n";
    cout << "The computer has already made his move, you are up!\n\n";

    cout << "Select your throw.\n";
    cout << "1) ROCK\n";
    cout << "2) PAPER\n";
    cout << "3) SCISSORS\n";
    cout << "Your Selection: ";

    int userSelection;
    cin >> userSelection;
    

    return 0;
}