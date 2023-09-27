// AOJ2013
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

struct name{
    tuple<int,int,int> bunkai(string s){
        int a=check(s[0],s[1]),b=check(s[3],s[4]),c=check(s[6],s[7]);
        return forward_as_tuple(a,b,c);
    }
    int check(char a,char b){
        int s;
        if(a=='0'){
            s=b-'0';
        }else{
            s=(a-'0')*10+(b-'0');
        }
        return s;
    }
};
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    int n;
    int max_=25*60*60;
    name me;
    while(cin>>n){
        if(n==0) break;
        vector<int> imos(max_,0);
        rep(i,n){
            string s,t;
            cin>>s>>t;
            int a,b,c;
            tie(a,b,c)=me.bunkai(s);
            imos[a*60*60+b*60+c]++;
            tie(a,b,c)=me.bunkai(t);
            imos[a*60*60+b*60+c]--;
        }
        int ans=imos[0];
        for(int i=1;i<max_;i++){
            imos[i]+=imos[i-1];
            ans=max(ans,imos[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
