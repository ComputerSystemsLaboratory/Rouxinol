#include <bits/stdc++.h>
using namespace std;

#define ii(i,start,end,inc) for(int i = start; i < end; i += inc)
#define dd(i,start,end,inc) for(int i = start; i > end; i -= inc)
#define zz(i, n) for(int i = 0; i < n; ++i)
#define pb push_back
#define BHAAG ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef pair<ll, ll> pll; 
typedef pair<int, int> pii; 
typedef pair<ull, ull> pull; 

const int  MAX = 1e6 + 3;
template <typename T> istream &operator>>(istream &os, vector<T> &v) { for (auto &e : v) os >> e; return os; }
template <typename T> void print(vector<T> &v, string sep = " ", string end = "\n") { for (auto it = v.begin(); it != v.end() - 1; ++it) { cout << *it << sep ; } cout << v.back() << end; }

// PRIMES 
vi my_primes;
void computePrimes(int mx) { my_primes.assign(mx + 1, 0); ii(i, 2, mx, 1) if (my_primes[i] == 0) ii(j, i + i, mx, i) if (my_primes[j] == 0) my_primes[j] = i; my_primes[0] = my_primes[1] = -1; }
inline bool isPrime(int x){ return my_primes[x] == 0; }

#define divs(a,b) ( b % a == 0 )

int main(int argc, char const *argv[])
{
    #ifdef JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;

    vi a(n); cin >> a;

    for(int i = k ; i < n; ++i){
        if( a[i] > a[i - k])
            cout << "Yes";
        else
            cout << "No";
        cout << '\n';
    }

    return 0;
}
