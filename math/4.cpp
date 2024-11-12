#include <boilerplate.h>
#include <bits/stdc++.h>
using namespace std; 


int main() 
{
    ll num;
    int count = 0;
    forn(1, 100)
    {
        num = pow(5, i) + pow(8, i + 1) + pow(13, i + 2);
        if(num % 6)
            count++;
    }
    cout << count << nl;
    return 0;
}