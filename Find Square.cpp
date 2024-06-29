#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;

    char array[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            cin >> array[i][j];            
        }
    }

    int x_cordinate = 0;
    int y_cordinate = 0;
    int count_black = 0;

    for (int i = 0; i < r ; i++)
    {

        for (int j = 0; j < c ; j++)
        {

            if (array[i][j] == 'B')
            {
                count_black++;
                x_cordinate = i;
                y_cordinate = j;

            }
        }
    }

    x_cordinate++;
    y_cordinate++;
    
    // square root of count_black
    int side = (int)sqrt(count_black);

    side = side/2 ; 
    cout <<  x_cordinate - side << " " << y_cordinate - side << endl;

    
    
    return 0;
}