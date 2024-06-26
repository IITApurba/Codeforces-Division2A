#include<iostream>

using namespace std;

int main()
{
    //Input of number of days
    int n;
    cin>>n;

    //Inputof string of flight
    string s;
    cin>>s;

    //Size of string of flight
    int size=s.size();

    //Number of flights from S->F
    int S_F_count=0;

    //Number of flights from F->S
    int F_S_count=0;



    for (int i = 0; i < size-1; i++)
    {
        if(s[i]=='S' && s[i+1]=='F'){
            S_F_count++;
        }
        else if(s[i]=='F' && s[i+1]=='S'){
            F_S_count++;
        }
    }

    if (S_F_count > F_S_count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}