#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n);
    int * end = unique(array, array + n);

    int ways = 0;

    for (int * ptr = array ; ptr!=end; ++ptr)
    {
        if (*ptr != 0)
        {
            ways++;
        }
    }
    
    cout << ways << endl;



    return 0;
}