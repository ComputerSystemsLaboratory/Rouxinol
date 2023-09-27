#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define FORR(i,a,b) for(int i=(int)b-1; i>=a; i--)

#define ALL(v) (v).begin(), (v).end()

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;

#define DEBUG(x) cerr<<#x<<": "<<(x)<<endl

int past[1252830];

int main(){
    while(true){
        int a,l;
        cin>>a>>l;
        if(a+l==0)break;
        fill(past,past+1252830,-1);
        past[a] = 0;
        int i = 1;
        while(true){
            string s = to_string(a);
            while(s.size()!=l)s += "0";
            sort(ALL(s));
            int mn = stoi(s);
            reverse(ALL(s));
            int mx = stoi(s);
            a = mx - mn;
            if(past[a] != -1){
                printf("%d %d %d\n", past[a], a, i-past[a]);
                break;
            }
            past[a] = i;
            i++;
        }
    }
    return 0;
}
