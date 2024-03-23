#include <iostream>
#include <cstdlib> //includes  srand() and rand()
#include <ctime>   //function related to date and time

using namespace std;

int main() {

    //generatw random no. with current time 
    srand(time(0));

    //generate a random no. b/w 1 and 100
    int random_no = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << " Welcome to the number guessing game! " << endl;
    cout << " A random number will generate b/w 1 and 100, try to guess it." << endl;

    do
    {
        cout << " Enter your guess: ";
        cin >> guess;

        if ( guess < random_no)
        {
            cout << " Too low! , Try again. "  << endl;
        } else if (guess > random_no)
        {
            cout << " Too high! , Try again. " << endl; 
        } else {
            cout << " Congratulations! You guessed the number. \n YOU WON!" << endl;
        }

        attempts++; 
        
        
    } while (guess != random_no);

    cout << " Number of attempts: " << attempts << endl;
   

    return 0;
    

}