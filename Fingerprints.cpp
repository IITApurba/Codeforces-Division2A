#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int x[n];
    int y[m];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x[i] == y[j])
            {
                cout << x[i] << " " ;
            }
            
        }
        
    }
    
    
    




    return 0;
}