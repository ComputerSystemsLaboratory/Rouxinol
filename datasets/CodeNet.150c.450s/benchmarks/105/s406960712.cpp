#include <bits/stdc++.h>
using namespace std;


//SHORTCUTS

#define ll long long
#define endl '\n'
#define i1(a) cin>>a
#define i2(a,b) cin>>a>>b
#define i3(a,b,c) cin>>a>>b>>c
#define o1(a) cout<<a<<endl
#define o2(a,b) cout<<a<<" "<<b<<endl
#define o3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define f(i,a,b) for(int i = a;i<b;i++)
#define fe(i,a,b) for(int i = a;i<=b;i++)
#define fi(i,a,b) for(i=a;i<b;i++)
#define eb emplace_back
#define pb push_back
#define pob pop_back
#define mp make_pair


// DEBUG CODE & FAST OUTPUT

#define printv(a) for (int i = 0; i < a.size(); i++) cout << a[i] << ' ';
#define printvl(a) for (int i = 0; i < a.size(); i++) cout << a[i] << endl;
#define printa(a, n) for (int i = 0; i< n; i++) cout << a[i] << ' ';
#define printal(a, n) for (int i = 0; i < n; i++) cout << a[i] << endl;


//DATA STRUCTURES

#define pq priority_queue
#define ms multiset
// #define y0 _y0_
// #define y1 _y1_
// #define div divi

typedef long double ld;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <ld> vld;
typedef vector <string> vs;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef vector <vi > vvi;
typedef vector <vll > vvll;
typedef vector <pii > vpii;
typedef vector <pll > vpll;


//IMP CONSTANT
const int mod = 1e9 + 7, inf = 1e9 + 7;
const ll infll = 1e18 + 7;
bool google_contest = false;

//MODULAR OPERATIONS
ll myadd(ll a,ll b){
    ll ans = a+b;
    ans-= ans>=mod ? mod : 0;
    return ans; 
}
ll mysub(ll a, ll b){
    return (a-b+mod)%mod;
}
ll mymul(ll a,ll b){
    return (a*b)%mod;
}
ll mypow(ll a, ll b){
    ll ans = 1;
    while(b>0)
        if(b&1) ans = mymul(ans,a),b--;
        else a = mymul(a,a),b >>= 1;
    return ans;
}
ll nCr(ll n,ll r){
    if(r==0)return 1;
    if(r==1)return n;
    if(n==0)return 0;
    return mymul(n,mymul(nCr(n-1,r-1),mypow(r,mod-2)));
}



vi dx = {1, -1, 0,  0};
vi dy = {0, 0,  1, -1};

//    /\    |  |\  /|                      
//   /__\   |  | \/ |           
//  /    \  |  |    | 



int main(){

ios_base::sync_with_stdio(0);
cin.tie(0); 
cout.tie(0);

int t,tt;
t=1;
i1(t);
if(google_contest)tt=1;

while(t--){

int n;
i1(n);

vll a(n);
f(i,0,n)i1(a[i]);

string s;
i1(s);

int size = 62;
vll basis(size,0);

bool ok = true;
for(int i=n-1;i>=0;i--){
    ll curr = a[i];

    f(j,0,size){
        if(basis[j]){
            if((curr>>j)&1ll)curr^=basis[j];
        }
    }

    if(curr){
        if(s[i]=='1'){
            ok = false;
            break;
        }else{
            f(j,0,size){
                if((curr>>j)&1ll){
                    basis[j] = curr;
                    break;
                }
            }
        }
    }
}

if(ok){
    o1(0);
}else{
    o1(1);
}

if(google_contest){
    cout<<"Case "<<tt++<<": ";
}
}

return 0;   
}


//    /\    |  |\  /|                      
//   /__\   |  | \/ |           
//  /    \  |  |    |   OVER!!!!
