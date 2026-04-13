#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number = 0, attempt = 0, attemptnumber = 10;
    cout<<"Let the game begin!"<<endl;
    srand(time(0));
    int randomnumber = rand() % 101;

    int low = 1;
    int high = 100;

    while (attempt < attemptnumber) {
        cout << "Guess the number (" << low -1 << "<->" << high +1 << "): ";
        cin >> number;

        if (number < 1 || number > 100) {
            cout << "The number needs to be between 1 and 100" << endl;
            continue;
        }

        attempt++;

        if (number < randomnumber) {
            cout << "No, the number is HIGHER" << endl;
            low = number + 1;   
        }
        else if (number > randomnumber) {
            cout << "No, the number is LOWER" << endl;
            high = number - 1;  
        }
        else {
            cout << "BOOYAH! You guessed the number in " << attempt << " attempts!" << endl;
            return 0;
        }

        cout << "Attempts left: " << (attemptnumber - attempt) << endl;
        cout<<endl;
    }

    cout << "GAME OVER! You used all 10 attempts. The number was " << randomnumber << endl;

    return 0;
}
