#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate Fibonacci numbers up to n
    vector<int> fibonacci;
    fibonacci.push_back(1);
    fibonacci.push_back(1);

    while (true) {
        int next_fib = fibonacci[fibonacci.size() - 1] + fibonacci[fibonacci.size() - 2];
        if (next_fib > n) break;
        fibonacci.push_back(next_fib);
    }

    // Convert Fibonacci vector to a set for fast lookup
    unordered_set<int> fibonacci_set(fibonacci.begin(), fibonacci.end());

    // Generate the name
    string name;
    for (int i = 1; i <= n; ++i) {
        if (fibonacci_set.find(i) != fibonacci_set.end()) {
            name += 'O';
        } else {
            name += 'o';
        }
    }

    // Output the name
    cout << name << endl;

    return 0;
}
