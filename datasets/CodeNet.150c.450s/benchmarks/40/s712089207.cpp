#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for(int i=0;i<n;++i)
#define all(v) v.begin(), v.end()
#define PI 3.141592653589793238462643383279
typedef long long int ll;
typedef unsigned long long ull;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
typedef pair<ll,ll> P;
const long long MOD = 1e9+7;
const ll INF = 1LL << 60;

struct Dice{
    int l[6]; //label

    void in(){
        for(int i = 0; i < 6; i++){
            cin >> l[i];
        }
    }

    void roll(char a){

        if(a == 'S'){
            int sto = l[0];
            l[0] = l[4];
            l[4] = l[5];
            l[5] = l[1];
            l[1] = sto;

        }else if(a == 'N'){
            int sto = l[0];
            l[0] = l[1];
            l[1] = l[5];
            l[5] = l[4];
            l[4] = sto;

        }else if(a == 'E'){
            int sto = l[0];
            l[0] = l[3];
            l[3] = l[5];
            l[5] = l[2];
            l[2] = sto;
        
        }else if(a == 'W'){
            int sto = l[0];
            l[0] = l[2];
            l[2] = l[5];
            l[5] = l[3];
            l[3] = sto;
        }

        return;

    }

};



int main(){
    Dice a;
    a.in();
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        a.roll(s[i]);
    }
    cout << a.l[0] << endl;

}
