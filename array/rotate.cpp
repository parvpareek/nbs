#include <iostream>
#include <vector>

using namespace std;

#define nl "\n";

int main()
{   
    int n;
    cout << " Enter n: ";
    cin >> n;
    vector<int> a(n);


    cout << "Enter the values: " << nl;
    for ( int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int temp = a[n-1];
    for ( int i = n - 1; i >= 0; i--)
    {
        a[i] = a[i -1];
    }
    a[0] = temp;

    for ( int i = 0; i  < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << nl;

    return 0;

}