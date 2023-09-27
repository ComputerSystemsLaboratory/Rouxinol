#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t[100];
ll a[209];
int n;
string S;
void add(ll x){
    for(int i=59; i>=0; --i){
        if(x&(1ll<<i))x^=t[i];
        if(x&(1ll<<i)){
            t[i]=x;
            break;
        }
    }
}

bool check(ll x){
    for(int i=59; i>=0 && x; --i)
    if(x&(1ll<<i))x^=t[i];
    return x;
}

void xuli(){
    for(int i=0; i<60; ++i)t[i]=0;
    cin >> n;
    for(int i=1; i<=n; ++i) cin >> a[i];
    cin >> S;
    S=" "+S;
    for(int i=n; i>=1; --i){
        if(S[i]=='0')add(a[i]);
        else
        if(check(a[i])){
            cout << 1<<endl;
            return;
        }
    }
    cout << 0 <<endl;
}

int main()
{
    #ifdef abcxyz
    freopen("a.inp","r", stdin);
    #endif // abcxyz
    int t;
    cin >> t;
    while(t--)xuli();
    return 0;
}
