#include <iostream>
#include<vector>
#include<utility>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = 1; i <= (n); i++)
#define drep(i,n) for(int i = (n)-1; i >= 0; i--)
#define srep(i,s,t) for (int i = s; i < t; i++)
#define rng(a) a.begin(),a.end()
typedef long long ll;

using namespace std;



int main() {
    int D;
    cin>>D;
    vector<int>c(27);
    rrep(i,26)cin>>c[i];
    vector<vector<int>>s(D+1,vector<int>(27));
    rrep(d,D){
        rrep(i,26)cin>>s[d][i];
    }
    vector<int>last(27);
    vector<int>C(D+1);
    vector<int>t(D+1);
    vector<int>v(D+1);
    rrep(d,D){
        cin>>t[d];
        last[t[d]] = d;
        rrep(i,26){
            C[d] += c[i]*(d-last[i]);
        }
        v[d] = v[d-1]+s[d][t[d]]-C[d];
    }
    rrep(d,D){
        cout<<v[d]<<endl;
    }

    return 0;
}