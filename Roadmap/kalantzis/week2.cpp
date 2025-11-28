#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void print_start() {
    cout << "|------------------------------------|\n";
    cout << "|                                    |\n";
    cout << "|         Welcome to Guessr!         |\n";
    cout << "|                                    |\n";
    cout << "|------------------------------------|\n";
    cout << "\nPress any key to start!\n";
}

void print_menu() {
    cout << "|------------------------------------|\n";
    cout << "|                                    |\n";
    cout << "|         Choose difficulty:         |\n";
    cout << "|                                    |\n";
    cout << "|         1. Easy (1-20)             |\n";
    cout << "|         2. Hard (1-100)            |\n";
    cout << "|         3. Exit                    |\n";
    cout << "|                                    |\n";
    cout << "|------------------------------------|\n";  
}

void print_retry() {
    cout << "|------------------------------------|\n";
    cout << "|                                    |\n";
    cout << "|         Play again? (y/n)          |\n";
    cout << "|                                    |\n";
    cout << "|------------------------------------|\n";
    cout << "\nPress y or n\n";
}

int game(int range, int choice) {
    int answer = rand() % range + 1;
    int guess;
    int tries = 0;

    if (choice == 1) {
        cout << "I'm thinking of a number between 1 and 20\n";
        cout << "Enter your guess:\n";
        while (true) {
            if (cin >> guess) {
                if (guess == answer) {
                    tries++;
                    cout << "You found it!\n";
                    cout << "Congrats you found it in " << tries << " tries\n";
                    return tries;
                }
                else if (guess > answer) {
                    cout << "Too high\n";
                    tries++;
                }
                else {
                    cout << "Too low\n";
                    tries++;
                }
            } 
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input\n";
            }
        }
    }
    if (choice == 2) {
        cout << "I'm thinking of a number between 1 and 100\n";
        cout << "Enter your guess:\n";
        while (tries < 7) {
            if (cin >> guess) {
                if (guess == answer) {
                    tries++;
                    cout << "You found it!\n";
                    cout << "Congrats you found it in " << tries << " tries\n";
                    return tries;
                }
                else if (guess > answer) {
                    cout << "Too high\n";
                    tries++;
                }
                else {
                    cout << "Too low\n";
                    tries++;
                }
            } 
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input\n";
            }
        }
        cout << "Exceeded 7 tries, you failed! The number was " << answer << "\n";
        return tries;
    }
    return 0;
}

int main() {
    srand(time(0));
    int games = 0;
    int best = 9999;
    int menu_choice;
    char retry = 'y';

    while (retry == 'y' || retry == 'Y') {
        print_start();
        Sleep(1000);

        print_menu();
        while (true) {
            if (cin >> menu_choice) {
                if (menu_choice >= 1 && menu_choice <= 3) 
                    break;
                cout << "Wrong input! Choose one of the options\n";
            } else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Wrong Input! Enter an integer.\n";
            }
        }
        if (menu_choice == 3) break;

        int range = (menu_choice == 1 ? 20 : 100);
        int attempts = game(range, menu_choice);
        games++;

        if (attempts < best) 
            best = attempts;
        print_retry();
        cin >> retry;
    }

    cout << "Total games played: " << games << "\n";
    if (games > 0) cout << "Best attempt (fewest guesses): " << best << "\n";
}