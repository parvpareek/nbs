#include <iostream>
#include <boilerplate.h>


using namespace std;



int main()
{
  vi v(5);

  cout << v.size() << endl;
  cout << is_prime(5) << endl;

  forn(int i, v.size())
  {
    cout << v[i]<< endl; 
  }
  return 0;
}
