#include <iostream> 
#include <vector>
#include <bits/stdc++.h>


using namespace std;

typedef vector<int> vi;

int main()
{
    int n, k;

    cout << "Enter the array size: ";
    cin >> n;

    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter positions to shift by: ";
    cin >> k;


    vi temp(n);
    fill(temp.begin(), temp.end(), 0);

    int j, t;
    for(int i = 0; i < n / k; i++)
    {

        j = i;
        while(j  + k < n)
        {
            if( j == i)
            {
                t = a[j];
            }
            else{
                
                t = a[j + k];
            }

            a[j + k] = a[j];

            
            j = j + k;
        }
        cout << j << endl;
        a[i] =  a[i] % k;

        for(int i = 0; i < n; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;

    }

    return 0;
}