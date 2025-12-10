// Same example included (Python) in the book named: Προγραμματισμός Υπολογιστών Γ' ΕΠΑΛ - Γιώργος Καρκαμάνης
#include <iostream>   // For input/output (cin, cout)
#include <cstdlib>    // For rand() and srand()
// See srand library at: 'https://cplusplus.com/reference/cstdlib/srand/'
#include <ctime>      // For time() to seed random numbers
// See time library at: 'https://en.cppreference.com/w/cpp/header/ctime'
#include <limits>     // For clearing bad input
// See limits at: 'https://en.cppreference.com/w/cpp/types/numeric_limits'
// Used in this exercise: 'std::numeric_limits' -> 'cin.ignore() to clear bad input'

using namespace std;

int main() {
    // Seed the random number generator once at the start
    // Different Random numbers in each game. Not reused numbers included
    srand(time(0));
    
    // Variables to track statistics across all games
    int totalGames = 0;        // Track how many games the player has played
    int bestAttempts = 999999; // Track the fewest guesses starting with the biggest number
    
    // Main game loop - keeps running until player chooses to exit
    bool keepPlaying = true;
    
    while (keepPlaying) {
        // Clear effect in screen (Just cosmetic, nothing special)
        cout << "\n\n";
        
        // Main menu in game
        cout << " /// Number Guessing Game \\\" << endl;
        cout << "Choose difficulty:" << endl;
        cout << "1. Easy (1-20)" << endl;
        cout << "2. Hard (1-100)" << endl;
        cout << "3. Exit" << endl;
        cout << "\n /// Enter your choice: \\\ ";
        
        int menuChoice;
        cin >> menuChoice;
        
        // Check if input failed (In case of letters instead of numbers)
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore bad input
            cout << "\nInvalid input! Please enter 1, 2, or 3." << endl;
            continue; // Go back to the start of the loop
        }
        
        // Handling Menu Choices
        if (menuChoice == 3) {
            // If player wants to exit
            keepPlaying = false;
            continue;
        }
        
        if (menuChoice != 1 && menuChoice != 2) {
            // Invalid menu choice
            cout << "\nInvalid choice! Please select 1, 2, or 3." << endl;
            continue; // Go back to menu
        }
        
        // Game Setup
        int minRange, maxRange, maxAttempts;
        
        if (menuChoice == 1) {
            // Easy mode
            minRange = 1;
            maxRange = 20;
            maxAttempts = 999999; // Unlimited attempts (big number)
        } else {
            // Hard mode
            minRange = 1;
            maxRange = 100;
            maxAttempts = 7; // Only 7 attempts allowed
        }
        
        // Generate a random number in the chosen range
        // Formula: rand() % (max - min + 1) + min
        int secretNumber = rand() % (maxRange - minRange + 1) + minRange;
        int attempts = 0;      // Count how many guesses
        bool guessedCorrectly = false; // Did they win?
        cout << "\n--- Game Start ---" << endl;
        cout << "I'm thinking of a number between " << minRange << " and " << maxRange << "." << endl;
        
        if (menuChoice == 2) {
            cout << "You have " << maxAttempts << " attempts!" << endl;
        }
        
        // Guess Loop
        while (attempts < maxAttempts && !guessedCorrectly) {
            cout << "\nEnter your guess: ";
            int guess;
            cin >> guess;
            
            // Check if input failed -> Error correction
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid guess. Please enter a number between " 
                     << minRange << " and " << maxRange << "." << endl;
                continue; // Don't count this as an attempt
            }
            
            // Check if guess is in valid range
            if (guess < minRange || guess > maxRange) {
                cout << "Invalid guess. Please enter a number between " 
                     << minRange << " and " << maxRange << "." << endl;
                continue; // Don't count this as an attempt
            }
            
            // Count this as a valid attempt
            attempts++;
            
            // Checking the guess
            if (guess == secretNumber) {
                // User won
                guessedCorrectly = true;
                cout << "\n Correct. You got it in " << attempts << " attempts." << endl;
                
                // Update statistics
                totalGames++;
                if (attempts < bestAttempts) {
                    bestAttempts = attempts; // New record!
                }
                
            } else if (guess < secretNumber) {
                // Guess is too low
                cout << "Too low";
                if (menuChoice == 2) {
                    cout << " (" << (maxAttempts - attempts) << " attempts left)";
                }
                cout << endl;
                
            } else {
                // Guess is too high
                cout << "Too high";
                if (menuChoice == 2) {
                    cout << " (" << (maxAttempts - attempts) << " attempts left)";
                }
                cout << endl;
            }
        }
        
        // Hard Mode: Running out of attempts
        if (!guessedCorrectly && attempts >= maxAttempts) {
            cout << "\n Out of attempts The number was: " << secretNumber << endl;
            totalGames++; // Still count it as a game played
        }
        
        // Play Again?
        cout << "\nPlay again? (y/n): ";
        char playAgain;
        cin >> playAgain;
        
        // Clearing inputs
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if (playAgain != 'y' && playAgain != 'Y') {
            keepPlaying = false; // Exit the main loop
        }
    }
    
    // Game summary when player is exiting
    cout << "\n /// Game Summary \\\" << endl;
    cout << "Total games played: " << totalGames << endl;
    
    if (totalGames > 0 && bestAttempts != 999999) {
        cout << "Best attempt (fewest guesses): " << bestAttempts << endl;
    } else {
        cout << "Best attempt (fewest guesses): N/A" << endl;
    }
    
    cout << "\n /// Thanks for wasting your time \\\. Goodbye." << endl;
    
    return 0;
}
