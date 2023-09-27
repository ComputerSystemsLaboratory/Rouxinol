#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    int n; cin>>n;
    rep(i,n){
        string ujimatu; cin>>ujimatu;
        map<string,int>mp;
        ll ans=0;
        for(int i=0; i<ujimatu.size()-1;i++){
            string a,b;
            for(int j=0; j<=i;j++)
                a+=ujimatu[j];
            for(int j=i+1; j<ujimatu.size();j++)
                b.push_back(ujimatu[j]);
            //cout<<a<<" "<<b<<endl;
            vector<string>gotiusa;
            gotiusa.push_back(a);
            gotiusa.push_back(b);
            reverse(all(a)); reverse(all(b));
            gotiusa.push_back(a); gotiusa.push_back(b);
            for(int i=0; i<gotiusa.size();i++){
                for(int j=0; j<gotiusa.size();j++){
                    if(i==j || i%2==j%2)continue;
                    string rize=gotiusa[i];
                    string syaro=gotiusa[j];
                    //cout<<rize<<" "<<syaro <<endl;
                    if(mp[rize+syaro]==0){
                        ans++;
                        mp[rize+syaro]++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}