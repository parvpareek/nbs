#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int get_mode(vi &v)
{
    int count, mode = v[0], max_count = 1;

    for(int i = 0; i < v.size(); i++)
    {
        count = 1;
        for(int j = i + 1 ; j < v.size(); j++)
        {
            if(v[i] == v[j])
                count++;
        }

        if(count > max_count) 
        {
            max_count = count;
            mode = v[i];
        }
    }


    cout << max_count << endl;

    return mode;
}

vi mode(vi &v, int n)
{
    sort(v.begin(), v.end());
    int count = 1;
    int max_count = 1;
    vi modes = {v[0]};

    for(int i = 0; i < n; i++)
    {
        if(v[i] == v[i - 1])
        {
            count++;
        }
        else{
            
            if(count > max_count)
            {
                max_count = count;
                modes = {v[i - 1]};
            }

            else if(count == max_count)
            {
                modes.push_back(v[i - 1]);
            }

            count = 1;
        }
        cout << " COUNT: " << endl;
        cout << count << endl;
    }
    set<int>::iterator it = s.begin();
    if(count == max_count)
    {

        modes.push_back(v[n - 1]);
    }

    else if (count >  max_count)
    {
        modes = {v[n - 1]};
    }

    return modes;

}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:" << endl;

    vi v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vi modes = mode(v, n);

    cout << "The Mode is: " << endl;

    for(int i = 0; i < modes.size(); i++)
    {
        cout <<  modes[i] << " ";
    }
    cout << endl;

    return 0;
}