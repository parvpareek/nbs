#include <iostream> 
#include <bits/stdc++.h>


using namespace std;

typedef vector<int> vi;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {


    
    
    return queries;

}


int main()
{
    int n, k, q;

    cout << "Enter the array size: ";
    cin >> n >> k >> q;

    vi a(n);
    vi queries(q);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }   
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }   

    reverse(a.begin(), a.end());
    reverse(a.begin(), (a.begin() + k - 1));
    reverse(a.begin() + k, a.end() - 1);
    
    
    for(int i = 0; i < queries.size(); i++)
    {
        queries[i] = a[queries[i]];
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }   

    cout << endl;



    return 0;

}
