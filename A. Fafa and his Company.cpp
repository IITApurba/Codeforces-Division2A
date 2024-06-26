#include<iostream>
using namespace std;

int main()
{
    //Input of number of employees
    int n;
    cin >> n;

    //Input of number of ways
    int ways = 0;

    for (int l = 1; l < n; l++)
    {
        if ((n-l)%l == 0)
        {
            ways++;
        }
    }

    cout << ways << endl;

    return 0;
}