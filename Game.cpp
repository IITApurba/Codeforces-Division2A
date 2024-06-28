#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v;

    //taking input the elements of a vector
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }


    //sort the vector
    sort(v.begin(), v.end());

    //size of the vector
    int size = v.size();

    int mid;

    if (size%2 == 0)
    {
        mid = size/2 -1;
    }
    else{
        mid = size/2;
    }

    //print the mid value of the vector
    cout << v[mid] << endl;
    
    
    

    
    return 0;
}