#include<iostream>
using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;

    long long x = n/k;

    if (x % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
    return 0;
}