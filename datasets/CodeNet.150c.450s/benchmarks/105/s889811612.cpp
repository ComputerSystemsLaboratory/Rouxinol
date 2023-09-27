#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d", &x)
#define sz(v) (int) v.size()
#define pr(v) For(i, 0, sz(v)) {cout<<v[i]<<" ";} cout<<endl;
#define slld(x) scanf("%lld", &x)
#define all(x) x.begin(), x.end()
#define For(i, st, en) for(ll i=st; i<en; i++)
#define tr(x) for(auto it=x.begin(); it!=x.end(); it++)
#define fast std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define ld long double
#define int long long
#define double long double
#define mp make_pair
#define F first
#define S second
typedef pair<int, int> pii;
typedef vector<int> vi;
#define pi 3.141592653589793238
const int MOD = 1e9+7;
const int INF = 1LL<<60;


const int N = 2e5+5;

// it's swapnil07 ;)
 
#ifdef SWAPNIL07
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
int begtime = clock();
#define end_routine() cout << "\n\nTime elapsed: " << (clock() - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n";
#else
#define endl '\n'
#define trace(...)
#define end_routine()
#endif

vector<int> vect;

int least_bit_set(int x){
    return x & (-x);
}

vector<int> eliminate(vector<int>& values){
    int i = 0;
    while(true){
        if(i >= sz(values)){
            return values;
        }
        int j = i;
        for(int k=i+1; k<sz(values); k++){
            if(least_bit_set(values[k]) < least_bit_set(values[j]))
                j = k;
        }
        swap(values[i], values[j]);
        for(int k=i+1; k<sz(values); k++){
            if(least_bit_set(values[k]) == least_bit_set(values[i]))
                values[k] ^= values[i];
        }
        i++;
    }
}

bool in_span(int x, vector<int> &v){
    for(int y: v){
        if((least_bit_set(y) & x) != 0){
            x ^= y;
        }
    }
    return x==0;
}

void solve(){
    vect.clear();
    int n; cin>>n;
    int a[n];
    bool s[n];
    For(i, 0, n){
        cin>>a[i];
    }
    string ss; cin>>ss;
    For(i, 0, n){
        s[i] = (ss[i]=='1');
    }
    reverse(s, s+n); reverse(a, a+n);
    bool fl = true;
    For(i, 0, n){
        if(!s[i]){
            vect.pb(a[i]);
            continue;
        }
        else{
            vector<int> x = vect;
            vector<int> eli = eliminate(x);
            if(!in_span(a[i], eli)){
                fl = false;
                break;
            }
        }
    }
    if(fl){
        cout<<0;
    }
    else{
        cout<<1;
    }
}


signed main()
{
    fast
    #ifdef SWAPNIL07
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t=1; 
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}

