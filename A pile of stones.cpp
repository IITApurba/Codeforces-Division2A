#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;

    string s;
    cin >> s ;

    int have = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '-' && have > 0){
            have--;
        }
        else if(s[i] == '+'){
            have++;
        }
    }
    cout<<have<<endl;
    
    
    
    return 0;
}