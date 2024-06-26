#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void reconstruct_binary_number(int n, const string &s) {
    // Count the occurrences of each letter
    int count_z = 0, count_o = 0, count_n = 0, count_e = 0, count_r = 0;
 
    for (char c : s) {
        if (c == 'z') count_z++;
        if (c == 'o') count_o++;
        if (c == 'n') count_n++;
        if (c == 'e') count_e++;
        if (c == 'r') count_r++;
    }
 
    // Determine the number of 'one' and 'zero'
    // We can use the count of 'n' to determine the number of "one"
    int num_one = count_n;
 
    // We can use the count of 'z' to determine the number of "zero"
    int num_zero = count_z;
 
    // Construct the maximum binary number
    vector<int> result;
    result.reserve(num_one + num_zero);
    
    for (int i = 0; i < num_one; ++i) {
        result.push_back(1);
    }
    for (int i = 0; i < num_zero; ++i) {
        result.push_back(0);
    }
 
    // Print the result
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;
}
 
int main() {
    int n;
    string s;
    
    // Input
    cin >> n;
    cin >> s;
 
    // Output the result
    reconstruct_binary_number(n, s);
    
    return 0;
}