
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef  vector<int> vi;

#define nl "\n";



int getMaximumGenerated(int n) 
{

    vi v(n + 1);
    v[0] = 0;
    v[1] = 1;

    for(int i = 0; i <= n / 2; i++)
    {
        v[2 * i] = v[i];
        v[2 * i + 1] = v[i] + v[ i + 1];
    }

    int max = v[0];
    for(int i = 0; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    for(int i = 0; i <= n; i++)
    {
        max = v[i] > max ? v[i] : max;
    }

    return max;
}

int main()
{   
    int n;
    cout << " ENTER THE NUMBER: ";
    cin >> n;
    cout << getMaximumGenerated(n);

    return 0;
}