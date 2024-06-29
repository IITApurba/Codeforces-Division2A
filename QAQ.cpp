#include<iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int size = str.size();

    int count = 0;  // To keep track of the number of 'QAQ' substrings

    for (int i = 0; i < size ; i++)
    {
        for (int j = i+1; j < size ; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (str[i] == 'Q' && str[j] == 'A' && str[k] == 'Q')
                {
                    count++;
                }
                
            }
            
        }
        
    }

    cout << count;
        
    return 0;
}