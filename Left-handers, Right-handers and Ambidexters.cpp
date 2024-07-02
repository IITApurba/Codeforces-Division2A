#include<iostream>
using namespace std;

int main()
{
    int l, r , a;

    cin >> l >> r >> a;
    
    if (l>r){
        int temp;
        temp = l;
        l = r;
        r = temp;
    }

    int needed = r - l;
    if (needed <= a)
    {
        l += needed;
        a -= needed;
    }
    else{
        l += a;
        a = 0;
    }

    l += a/2;
    r += a/2;


    cout << 2* min(l, r) << endl;
    


    return 0;
}