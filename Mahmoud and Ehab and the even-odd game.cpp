#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Mahmoud starts the game and can only choose even numbers
    // Ehab chooses odd numbers
    // If n is even, Mahmoud can choose n itself and win
    // If n is odd, Mahmoud can't make it even in his turn, thus Ehab wins
    if (n % 2 == 0) {
        cout << "Mahmoud" << endl;
    } else {
        cout << "Ehab" << endl;
    }

    return 0;
}