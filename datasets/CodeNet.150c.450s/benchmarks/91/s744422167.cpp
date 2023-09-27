#include <bits/stdc++.h>
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < n; i++)
#define ford(i, n) for (int i = n - 1; i > -1; i--)
#define forl(i, l, r) for (int i = l; i <= r; i++)
#define vc vector
#define f first
#define s second
#define pb(i) push_back(i)
#define mx(ar, n) (*max_element(ar, ar + n))
#define mn(ar, n) (*min_element(ar, ar + n))
#define mnv(v) (*min_element(v.begin(), v.end()))
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef string S;
typedef int I;

int x = 1000001 ;
bool prime[1000001] ;

void sev(){
    
    for(int i = 2; i*i <= x; i++)
    {
        
        for(int j = i*2; j <= x; j+=i)
        {
            prime[j] = true ;
        }
        
    }
    
}

int main()
{
    sev() ;
    I n ;
    while(cin >> n){
        int c = 0 ;
        for(int i = 2; i <= n; i++)
        {
            if(!prime[i]){
                c++ ;
            }
        }
        cout << c << endl ;
        
    }
    return 0;
}

