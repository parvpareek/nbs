#include <iostream>
#include <boilerplate.h>

using namespace std;

bool mod(vi &v, int n)
{   
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }


    return !(s.size() == v.size());
}
int main()
{
    int n;
    cout << "Enter the array length: " << endl;
    cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // unordered_map<int, int> m;
    // int max_count = 1;
    // vi modes;
    // int count;
    // for(int i = 0; i < n; i++)
    // {
    //     m[v[i]]++;
    //     count = m[v[i]];

    //     if(count > max_count)
    //     {
    //         modes = {v[i]};
    //     }
    //     else if(count == max_count)
    //     {
    //         modes.push_back(v[i]);
    //     }
    //     max_count = max(max_count, count);
    // }

    bool modes = mod(v, n);
    cout << modes << endl;
    string answer = modes ? "Contains Duplicate" : "All are unique"; 
    cout << answer << endl;
    
    // for(int i = 0; i < modes.size(); i++)
    // {
    //     cout <<  modes[i] << " ";
    // }
    // cout << endl;

    return 0;
}