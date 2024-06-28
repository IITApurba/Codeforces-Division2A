#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int a,b;

    for (int i = 1; i <= x; i++)
    {
        a = i;

        for (int j = 1; j <= x; j++)
        {
            b = j;

            if (a%b == 0)
            {
                if (a * b > x)
                {
                    if (a/b < x)
                    {
                        cout << a << " " << b << endl;
                        return 0;
                    }
                    
                }

            }
            
        }
        
    }

    a = -1;
    b = -1;

    cout << a << endl;

    return 0;
}