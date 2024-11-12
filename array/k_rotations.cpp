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

    cout << "First Approach: \n";

    vi temp(n);
    // Loop through the array to create a temp array
    /*
    Store the numbers that are going to be replaced 
    The numbers that get replaced are the last k numbers
    So we store it in the beginning of the array. 
    And for the remaining we just take i % k
    Simpler approach would be to just set the integers to i + 3 % k index hahaha
    */
   /*
    for(int i = 0; i < n; i++)
    {
        
        if(i < k) // When i is less than k
        {
            temp[i] = a[i + k - 1]; // 
        }
        else{
            temp[i] = a[i % k]; 
            
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
   */
    
    cout << "\nSecond approach: " << endl;
    for(int i = 0; i < n; i++)
    {
        temp[i] = a[(i + k - 1) % n];
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    /*
    Doing it without creating a new array: 
    */
    
    int t, j;
    cout << "\nThird Approach: \n";
    fill(temp.begin(), temp.end(), 0);
    

/*
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
            a[j + k] = t;
            j = j + k;
        }
        cout << j << endl;
        swap(a[j], a[i]);
        for(int i = 0; i < n; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;

    }
    
    
*/
    
    

    return 0;
}