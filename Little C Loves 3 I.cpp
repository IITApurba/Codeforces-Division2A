#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 3 == 0) {
        // If n is divisible by 3, we need to adjust to avoid multiples of 3.
        cout << n - 2 << " " << 1 << " " << 1 << endl;
    } else {
        // If n is not divisible by 3, we can safely use the following approach:
        int a = 1, b = 1, c = n - 2;
        // Ensure none of the numbers is a multiple of 3
        while (c % 3 == 0) {
            c--;
            a++;
        }
        cout << a << " " << b << " " << c << endl;
    }
    
    return 0;
}
