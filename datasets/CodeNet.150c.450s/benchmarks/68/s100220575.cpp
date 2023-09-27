    #include <bits/stdc++.h>
    #define REP(i, n) for(int i = 0;i < n;i++)
    #define REPR(i, n) for(int i = n;i >= 0;i--)
    #define FOR(i, m, n) for(int i = m;i < n;i++)
    #define FORR(i, m, n) for(int i = m;i >= n;i--)
    #define SORT(v, n) sort(v, v+n);
    #define VSORT(v) sort(v.begin(), v.end());
    #define pb(a) push_back(a)
    #define INF 999999999999
    #define MOD 1000000007
    using namespace std;
    typedef long long LL;
    typedef pair<int, int> P;
    typedef pair<LL, LL> LP;
    typedef pair<int, P> PP;
    typedef pair<LL, LP> LPP;
    typedef vector<LL> LV;

    int dy[]={0, 0, 1, -1, 0};
    int dx[]={1, -1, 0, 0, 0};


    LL gcd(LL a, LL b){    return b != 0 ? gcd(b, a % b) : a;} 

    LL lcm(LL number1,LL number2){	return number1 * number2 / gcd(number1,number2);}

    int f(){
        int n;
        cin >> n;
        if(n==0) return 0;
        int ans = 1e9;
        vector<int> x(n);
        REP(i,n){
            cin >> x[i];
        }
        sort(x.begin(),x.end());
        REP(i,n-1){
            ans = min(abs(x[i+1]-x[i]),ans);
        }
        cout << ans << endl;

        return 1;

    }

    int main(){
        while(f());

        return 0;
    }
