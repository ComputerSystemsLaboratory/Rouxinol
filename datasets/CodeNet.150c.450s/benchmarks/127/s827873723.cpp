#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(a, b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define pb push_back
#define show(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(kbrni,v.size())cout<<" "<<v[kbrni];cout<<endl
#define sset(s) cout<<#s<<":";each(kbrni,s)cout <<" "<<kbrni;cout<<endl

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;



int main()
{
    int n;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        string bf = s;
        vector<string> vec;
        rep(j,s.size()-1){
            s = bf;
            vector<string> vec1;
            vector<string> vec2;
            string t = s.substr(0,j+1);
            vec1.pb(t);
            reverse(all(t));
            vec1.pb(t);
            reverse(all(s));
            t = s.substr(0,s.size()-j-1);
            vec2.pb(t);
            reverse(all(t));
            vec2.pb(t);
            rep(k,vec1.size()){
                rep(l,vec2.size()){
                    string hoge1 = vec1[k] + vec2[l];
                    string hoge2 = vec2[k] + vec1[l];
                    vec.pb(hoge1);
                    vec.pb(hoge2);
                }
            }
        }
        sort(all(vec));
        vec.erase(unique(all(vec)),vec.end());
        cout << (int)vec.size() << "\n";
    }
    return 0;
}