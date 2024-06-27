#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int red = 2 * n;
    int green = 5 * n;
    int blue = 8 * n;

    int notebook = 0;

    // Calculate the number of notebooks needed for red sheets
    notebook += (red + k - 1) / k;

    // Calculate the number of notebooks needed for green sheets
    notebook += (green + k - 1) / k;

    // Calculate the number of notebooks needed for blue sheets
    notebook += (blue + k - 1) / k;

    cout << notebook << endl;

    return 0;
}
