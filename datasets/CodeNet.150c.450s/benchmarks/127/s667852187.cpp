#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

int main(){

    int n;
    cin >> n;
    rep(i,n){
        map<string, bool> m;
        string s;
        string c[4];
        cin >> s;
        range(i,1,s.size()){
            c[0] = s.substr(0, i);
            c[2] = s.substr(i, s.size());

            c[1] = c[0]; c[3] = c[2];
            reverse(all(c[1]));
            reverse(all(c[3]));

            
            m[c[0] + c[2]] = 1;
            m[c[0] + c[3]] = 1;
            m[c[1] + c[2]] = 1;
            m[c[1] + c[3]] = 1;
            m[c[2] + c[0]] = 1;
            m[c[3] + c[0]] = 1;
            m[c[2] + c[1]] = 1;
            m[c[3] + c[1]] = 1;
        }

        //for(auto it: m){ cout << it.first << endl; }
        cout << m.size() << endl;
    }
}