#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total_marks[n];

    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        total_marks[i] = a + b + c + d;
    }

    int rank = 1;
    int thomas_marks = total_marks[0];

    for (int i = 1; i < n; i++) {
        if (total_marks[i] > thomas_marks) {
            rank++;
        }
    }

    cout << rank << endl;
    return 0;
}
