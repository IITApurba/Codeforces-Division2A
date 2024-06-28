#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n*2];

    for (int i = 0; i < 2*n; i++)
    {
        cin >> array[i];
    }
    
    int x;
    cin >> x;

    int count = 0;

    for (int i = 0; i < 2*n; i++)
    {
        if (array[i] > x) 
        {
            count++;
        }
        
    }

        cout << count/2+1 << endl;
        
    return 0;
}