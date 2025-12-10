#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <list>

using namespace std;

class Ngg
{
    int choice;
    int randomNum;
    int guess;
    int attempts = 0;
    char pick;
    int games = 0;
    list<int> all_attempts;

public:
    void menu();
    void easy();
    void hard();
    void afterMenu();
};

void Ngg::menu()
{
    system("clear");
    cout << "--- Number Guessing Game ---\nChoose difficulty:\n1. Easy (1-20)\n2. Hard (1-100)\n3. Exit" << endl;
    cin >> choice;
    cout << "\n";

    if (choice >= 1 && choice <= 3){
        switch (choice)
        {
        case 1:
            system("clear");
            easy();
            break;

        case 2:
            system("clear");
            hard();
            break;

        case 3:
            system("clear");
            exit(0);
        }
    }
    else{
        system("clear");
        cout<<"Invalid Input. Please enter a number between 1 & 3."<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        menu();
    }
}

void Ngg::easy()
{

    srand(time(0));

    randomNum = rand() % 21;

    cout << "I'm thinking of a number between 1 and 20.\nEnter your guess:" << endl;
    
    while (guess != randomNum)
    {
        cin >> guess;
        cout << "\n";

        if(guess >= 1 && guess <= 20){
            if (guess < randomNum)
            {
                cout << "Too Low!\n" << endl;
                cout << "Try Again: " << endl;
                attempts++;
            }
            else if(guess > randomNum)
            {
                cout << "Too High!\n" << endl;
                cout << "Try Again: " << endl;
                attempts++;
            }
            else{
                attempts++;
                cout << "Correct! You got it in ";
                cout << attempts;
                cout << " attempts." << endl;
                games ++;
                all_attempts.push_back(attempts);
                attempts = 0;
                this_thread::sleep_for(chrono::seconds(3));
                afterMenu();
            }
        }
        else{
            system("clear");
            cout<<"Invalid Input. Please type a number in range."<<endl;
            this_thread::sleep_for(chrono::seconds(3));
            afterMenu();
        }
    }   
}

void Ngg::hard()
{

    srand(time(0));

    randomNum = rand() % 101;

    cout << "I'm thinking of a number between 1 and 100.\nEnter your guess:" << endl;

    while (guess != randomNum)
    {
        cin >> guess;
        cout << "\n";

        if(guess >= 1 && guess <= 100){
            if (guess < randomNum)
            {
                cout << "Too Low!\n" << endl;
                cout << "Try Again: " << endl;
                attempts++;

                if(attempts == 7){
                    system("clear");
                    cout<<"Out of attempts! The number was: "<<randomNum<<endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    afterMenu();
                    break;
                }
            }
            else if(guess > randomNum)
            {
                cout << "Too High!\n" << endl;
                cout << "Try Again: " << endl;
                attempts++;

                if(attempts == 7){
                    system("clear");
                    cout<<"Out of attempts! The number was: "<<randomNum<<endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    afterMenu();
                    break;
                }
            }
            else{
                attempts++;
                cout << "Correct! You got it in ";
                cout << attempts;
                cout << " attempts." << endl;
                games ++;
                all_attempts.push_back(attempts);
                attempts = 0;
                this_thread::sleep_for(chrono::seconds(3));
                afterMenu();
            }
        }
        else{
            system("clear");
            cout<<"Invalid Input. Please type a number in range."<<endl;
            this_thread::sleep_for(chrono::seconds(3));
            afterMenu();
        }
    }
}

void Ngg::afterMenu(){
    system("clear");
    cout<<"Play again? (y/n)\n"<<endl;
    cin>>pick;

    if (pick == 'y' || pick == 'Y'){
        menu();
    }
    else if (pick == 'n' || pick == 'N'){
        system("clear");
        cout<<"Total games played: ";
        cout<<games<<endl;
        int mini = *min_element(all_attempts.begin(), all_attempts.end());
        cout<<"Best attempt (fewest guesses): "<<mini<<endl;
        exit(0);
    }
    else{
        system("clear");
        cout<<"Invalid input. Please type y/Y or n/N."<<endl;
        this_thread::sleep_for(chrono::seconds(3));
        afterMenu();
    }
}

int main()
{
    Ngg a1;

    a1.menu();
}