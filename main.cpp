#include <iostream>
#include <random>

using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main() {
    random_device rd;
    uniform_int_distribution<int> dist(1, 3);
    int computerSelection = dist(rd);
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
    while (userSelection > 3 || userSelection < 1) {
        cout << "Please select a value between 1 and 3\n";
        cout << "Your Selection: ";
        cin >> userSelection;
    }
    cout << "\n";
    if (userSelection == computerSelection) {
        while (userSelection == computerSelection) {
            computerSelection = dist(rd);
            cout << "It's a tie, please make your selection again:\n";
            cout << "Your Selection: ";
            cin >> userSelection;
            while (userSelection > 3 || userSelection < 1) {
                cout << "Please select a value between 1 and 3\n";
                cout << "Your Selection: ";
                cin >> userSelection;
            }
            cout << "\n";
            cout << "The computer has thrown ";
            if (computerSelection == ROCK) {
                cout << "ROCK\n";
            } else if (computerSelection == PAPER) {
                cout << "PAPER\n";
            } else {
                cout << "SCISSORS\n";
            }
            cout << "You: ";
            if (userSelection == ROCK) {
                cout << "ROCK\n\n";
            } else if (userSelection == PAPER) {
                cout << "PAPER\n\n";
            } else {
                cout << "SCISSORS\n\n";
            }
        }
    } else {
        cout << "The computer has thrown ";
        if (computerSelection == ROCK) {
            cout << "ROCK\n";
        } else if (computerSelection == PAPER) {
            cout << "PAPER\n";
        } else {
            cout << "SCISSORS\n";
        }
        cout << "You: ";
        if (userSelection == ROCK) {
            cout << "ROCK\n\n";
        } else if (userSelection == PAPER) {
            cout << "PAPER\n\n";
        } else {
            cout << "SCISSORS\n\n";
        }
    }

    if (userSelection == ROCK && computerSelection == SCISSORS) {
        cout << "YOU WIN!";
    } else if (userSelection == ROCK && computerSelection == PAPER) {
        cout << "THE COMPUTER WINS!";
    } else if (userSelection == SCISSORS && computerSelection == PAPER) {
        cout << "YOU WIN!";
    } else if (userSelection == SCISSORS && computerSelection == ROCK) {
        cout << "THE COMPUTER WINS!";
    } else if (userSelection == PAPER && computerSelection == ROCK) {
        cout << "YOU WIN!";
    } else if (userSelection == PAPER && computerSelection == SCISSORS) {
        cout << "THE COMPUTER WINS!";
    }

    return 0;
}