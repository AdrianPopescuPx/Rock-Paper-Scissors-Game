#include <iostream>
#include <random>

using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main() {
    random_device rd;
    uniform_int_distribution<int> dist(1, 3);
    int computerSelection = dist(rd), opponent;
    cout << "###########################################\n";
    cout << "#                                         #\n";
    cout << "#     WELCOME TO ROCK PAPER SCISSORS!     #\n";
    cout << "#                                         #\n";
    cout << "###########################################\n\n";

    cout << "Please select your opponent type:\n";
    cout << "1) Computer\n";
    cout << "2) Real Person\n";
    cout << "Your Selection: ";
    cin >> opponent;
    cout << "\n";
    if (opponent == 1) {
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
                computerSelection = dist(rd);
                cout << "It's a tie, please throw again:\n";
                cout << "The computer has made a new move\n";
                cout << "Select your throw.\n";
                cout << "1) ROCK\n";
                cout << "2) PAPER\n";
                cout << "3) SCISSORS\n";
                cout << "Your Selection: ";
                cin >> userSelection;
                while (userSelection > 3 || userSelection < 1) {
                    cout << "Please select a value between 1 and 3\n";
                    cout << "Your Selection: ";
                    cin >> userSelection;
                }
                cout << "\n";
            }
        }
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

        if (userSelection == ROCK && computerSelection == SCISSORS) {
            cout << "ROCK beats SCISSORS: ";
            cout << "YOU WIN!";
        } else if (userSelection == ROCK && computerSelection == PAPER) {
            cout << "PAPER beats ROCK: ";
            cout << "THE COMPUTER WINS!";
        } else if (userSelection == SCISSORS && computerSelection == PAPER) {
            cout << "SCISSORS beats PAPER: ";
            cout << "YOU WIN!";
        } else if (userSelection == SCISSORS && computerSelection == ROCK) {
            cout << "ROCK beats SCISSORS: ";
            cout << "THE COMPUTER WINS!";
        } else if (userSelection == PAPER && computerSelection == ROCK) {
            cout << "PAPER beats ROCK: ";
            cout << "YOU WIN!";
        } else if (userSelection == PAPER && computerSelection == SCISSORS) {
            cout << "SCISSORS beats PAPER: ";
            cout << "THE COMPUTER WINS!";
        }
    } else {
        int opponentSelection;
        cout << "PLAYER NR. 1\n";
        cout << "Please select a value between 1 and 3\n";
        cout << "Select your throw.\n";
        cout << "1) ROCK\n";
        cout << "2) PAPER\n";
        cout << "3) SCISSORS\n";
        cout << "Your Selection: ";
        cin >> opponentSelection;
        while (opponentSelection > 3 || opponentSelection < 1) {
            cout << "Please select a value between 1 and 3\n";
            cout << "Your Selection: ";
            cin >> opponentSelection;
        }
        cout << "\n";
        int userSelection;
        cout << "PLAYER NR. 2\n";
        cout << "Please select a value between 1 and 3\n";
        cout << "Select your throw.\n";
        cout << "1) ROCK\n";
        cout << "2) PAPER\n";
        cout << "3) SCISSORS\n";
        cout << "Your Selection: ";
        cin >> userSelection;
        while (userSelection > 3 || userSelection < 1) {
            cout << "Please select a value between 1 and 3\n";
            cout << "Your Selection: ";
            cin >> userSelection;
        }
        cout << "\n";

        if (userSelection == opponentSelection) {
            while (userSelection == opponentSelection) {
                cout << "PLAYER NR. 1 has thrown ";
                if (opponentSelection == ROCK) {
                    cout << "ROCK\n";
                } else if (opponentSelection == PAPER) {
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
                cout << "It's a tie, please make your selection again:\n";
                cout << "PLAYER NR. 1\n";
                cout << "Please select a value between 1 and 3\n";
                cout << "Select your throw.\n";
                cout << "1) ROCK\n";
                cout << "2) PAPER\n";
                cout << "3) SCISSORS\n";
                cout << "Your Selection: ";
                cin >> opponentSelection;
                while (opponentSelection > 3 || opponentSelection < 1) {
                    cout << "Please select a value between 1 and 3\n";
                    cout << "Your Selection: ";
                    cin >> opponentSelection;
                }
                cout << "\n";

                cout << "PLAYER NR. 2\n";
                cout << "Please select a value between 1 and 3\n";
                cout << "Select your throw.\n";
                cout << "1) ROCK\n";
                cout << "2) PAPER\n";
                cout << "3) SCISSORS\n";
                cout << "Your Selection: ";
                cin >> userSelection;
                while (userSelection > 3 || userSelection < 1) {
                    cout << "Please select a value between 1 and 3\n";
                    cout << "Your Selection: ";
                    cin >> userSelection;
                }
                cout << "\n";
            }
        }
        cout << "PLAYER NR. 1 has thrown ";
        if (opponentSelection == ROCK) {
            cout << "ROCK\n";
        } else if (opponentSelection == PAPER) {
            cout << "PAPER\n";
        } else {
            cout << "SCISSORS\n";
        }
        cout << "PLAYER NR. 2 has thrown ";
        if (userSelection == ROCK) {
            cout << "ROCK\n\n";
        } else if (userSelection == PAPER) {
            cout << "PAPER\n\n";
        } else {
            cout << "SCISSORS\n\n";
        }

        if (userSelection == ROCK && opponentSelection == SCISSORS) {
            cout << "ROCK beats SCISSORS: ";
            cout << "PLAYER NR. 1 WINS!";
        } else if (userSelection == ROCK && opponentSelection == PAPER) {
            cout << "PAPER beats ROCK: ";
            cout << "PLAYER NR. 2 WINS!";
        } else if (userSelection == SCISSORS && opponentSelection == PAPER) {
            cout << "SCISSORS beats PAPER: ";
            cout << "PLAYER NR. 1 WINS!";
        } else if (userSelection == SCISSORS && opponentSelection == ROCK) {
            cout << "ROCK beats SCISSORS: ";
            cout << "PLAYER NR. 2 WINS!";
        } else if (userSelection == PAPER && opponentSelection == ROCK) {
            cout << "PAPER beats ROCK: ";
            cout << "PLAYER NR. 1 WINS!";
        } else if (userSelection == PAPER && opponentSelection == SCISSORS) {
            cout << "SCISSORS beats PAPER: ";
            cout << "PLAYER NR. 2 WINS!";
        }
    }

    return 0;
}