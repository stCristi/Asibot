#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number = 0, attempt = 0, attemptnumber = 10;

    srand(time(0));
    int randomnumber = rand() % 100 + 1;

    while (attempt < attemptnumber) {
        cin >> number;

        if (number < 1 || number > 100) {
            cout << "The number needs to be between 1 and 100" << endl;
        }

        else {
            attempt++;

            if (number < randomnumber) {
                cout << "No, the number is higher +" << endl;
            }
            
            else if (number > randomnumber) {
                cout << "No, the number is lower -" << endl;
            }
            
            else {
                cout << "BOOYAH! You guessed the number in " << attempt << " attempts!" << endl;
                return 0;
            }

            cout << "Attempts left: " << (attemptnumber - attempt) << endl;
        }
    }

    cout << "GAME OVER! You used all 10 attempts. The number was " << randomnumber << endl;

    return 0;
}
