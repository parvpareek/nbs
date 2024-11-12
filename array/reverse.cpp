#include <iostream>
#include <algorihtm>
#include <vector>

using namespace std;

#define vi vector<int>;
#define nl "\n";

int main()
{   
    int n =4;
    vector<int> a(n);

    for ( int i =0; i < n; i++)
    {
        cin >> a[i];
    }

    int j =0 ;
    for( int i = a.size() - 1; i >= (a.size() - 1)/2; i--, j++)
    {
        a[j] = a[i];
    }

    int sum =0 ;
    for ( int i =0; i < n; i++)
    {
        sum += a[i];
    }
    cout <<" SUM : " << sum << nl;

    return 0;

}