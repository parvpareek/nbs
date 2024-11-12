
#ifndef BOILERPLATE_H
#define BOILERPLATE_H

#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Shortcuts for commonly used types
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7; // For modular arithmetic
const double PI = acos(-1);

// Macros for common operations
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
#define sz(x) ((int)(x).size())
#define nl "\n"

// Loops
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPD(i, n) for (int i = n - 1; i >= 0; i--)
#define forn(x, n) for (int i = x; i < n; i++)

// Utility Functions
template<typename T> bool chmin(T &a, const T &b) { return (b < a ? a = b, true : false); }
template<typename T> bool chmax(T &a, const T &b) { return (a < b ? a = b, true : false); }

// Binary exponentiation (modular)
ll binpow(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Greatest Common Divisor
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

// Least Common Multiple
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Modular Arithmetic
ll mod_add(ll a, ll b, ll m = MOD) { return (a % m + b % m) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return ((a % m - b % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
ll mod_inv(ll a, ll m = MOD) { return binpow(a, m - 2, m); } // Modular inverse (Fermat's little theorem)

// Prime Checking
bool is_prime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Sieve of Eratosthenes (for generating primes up to MAXN)
const int MAXN = 1e6 + 5;
vector<bool> is_prime_sieve(MAXN, true);
void sieve() {
    is_prime_sieve[0] = is_prime_sieve[1] = false;
    for (int i = 2; i * i <= MAXN; i++) {
        if (is_prime_sieve[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime_sieve[j] = false;
            }
        }
    }
}

// Custom comparison for sorting pairs by second element
bool comp_by_second(const pii &a, const pii &b) { return a.S < b.S; }

// Debugging macros (can be used to print variables while debugging)
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl;



#endif // BOILERPLATE_H
