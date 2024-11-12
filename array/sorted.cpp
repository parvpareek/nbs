#include <iostream>
#include <vector>

using namespace std;

typedef  vector<int> vi;

bool sorted(vi &v)
{
    int i = 0;
    int n = v.size();
    while(i < n &&  v[i] == v[i + 1])
    {
        i++;
    }
    bool flag = (v[i] > v[i + 1]) ? 1 : 0;

    
    //bool flag = (v[0] > v[1]) ? 1 : 0;
    for(; i < v.size() - 1; i++)
    {
        if(flag && v[i] < v[i + 1])
        {
            return false;
        }

        else if(!flag && v[i] > v[i + 1])
        {
            return false;
        }
        }

    return true;
}
int main()
{   
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << sorted(v);
     

    return 0;
} 