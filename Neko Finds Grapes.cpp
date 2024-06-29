#include <iostream>
#include <vector>

using namespace std;

int even(int a){
    if(a%2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    vector<int> chest;
    vector<int> keys;

    int n,m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        chest.push_back(temp);
    }
    
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        keys.push_back(temp);
    }

    int chest_odd, chest_even, keys_odd, keys_even;
    chest_odd = 0;
    chest_even = 0;
    keys_odd = 0;
    keys_even = 0;

    for (int i = 0; i < n; i++)
    {
        if (even(chest[i]))
        {
            chest_even ++;
        }
        else{
            chest_odd++;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        if (even(keys[i]))
        {
            keys_even ++;
        }
        else{
            keys_odd++;
        }
        
    }

    cout << min(keys_odd, chest_even) + min(keys_even, chest_odd) << endl;
        
    return 0;
}