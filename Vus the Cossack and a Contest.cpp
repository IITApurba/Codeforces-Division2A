#include<iostream>
using namespace std;

int main()
{
    //Taking all necessary parameters
    int n;
    int k;
    int m;

    cin>>n;
    cin>>k;
    cin>>m;

    if(k>=n && m>=n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}