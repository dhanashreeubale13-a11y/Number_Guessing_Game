#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    int number, guess, attempts;
    char choice;

    cout << "-----------------------------------" << endl;
    cout << "       NUMBER GUESSING GAME        " << endl;
    cout << "-----------------------------------" << endl;

    do {
        srand((unsigned)time(NULL));   
        number = rand() % 100 + 1;     
        attempts = 0;

        cout << "\nI have selected a number between 1 and 100." << endl;
        cout << "Try to guess it!" << endl;

        do {
            cout << "\nEnter your guess: ";
            cin >> guess;

            if (cin.fail()) {
                cin.clear();        
                cin.ignore(1000, '\n'); 
                cout << "Invalid input! Please enter a number.\n";
                continue;
            }

            attempts++;

            if (guess > number)
                cout << "Too high! Try again." << endl;
            else if (guess < number)
                cout << "Too low! Try again." << endl;
            else {
                cout << "\nCongratulations! You guessed the number in "
                     << attempts << " attempts!" << endl;
            }

        } while (guess != number);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing! Goodbye!" << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
