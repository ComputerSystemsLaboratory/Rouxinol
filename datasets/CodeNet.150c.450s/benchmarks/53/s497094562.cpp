// NTL_1_A
#include <bits/stdc++.h>
#define endl "\n"
#define rep(i,n) for(int i=0;i<int(n);i++)
#define e_b emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
template <class T>ostream &operator<<(ostream &o,const vector<T>&v) //vectorの中身を見る
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}
void map_p(map<int,int>& d){cout<<"map: ";for(auto a : d){cout<<"{"<<a.first<<":"<<a.second<<"}";}cout<<endl;} //mapの中身を見る
void set_p(set<int>& d){cout<<"set: ";for(int a : d){cout<<a<<" ";}cout<<endl;} //setの中身を見る

int n;
vector<int> soinsu;
void bunkai(int x){
    int now=x;
    for(int i=2;i*i<=n;i++){
        while(true){
            if(now%i!=0) break;
            soinsu.e_b(i);
            now/=i;
        }
    }
    if(now!=1) soinsu.e_b(now);
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    cin>>n;
    bunkai(n);
    cout<<n<<":";
    rep(i,sz(soinsu)){
        cout<<" "<<soinsu[i];
    }
    cout<<endl;
    return 0;
}
