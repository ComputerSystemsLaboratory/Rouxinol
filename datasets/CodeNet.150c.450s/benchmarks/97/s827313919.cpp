#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#include<map>
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
#define MAX 9999999
#define fst first
#define sec second
using namespace std;
typedef pair<int, int> pii;
int main(){
    int n;
    while (cin>>n,n) {
        --n;
        vector<pii>v;
        vector<pii>u;
        pii ans=pii(0,0);
        v.push_back(pii(0,0));
        rep(i,n){
                int m,l; cin>>m>>l;
                if(!l)v.push_back(pii(v[m].first-1,v[m].second));
                else if(l==1)v.push_back(pii(v[m].first,v[m].second-1));
                else if(l==2)v.push_back(pii(v[m].first+1,v[m].second));
                else if(l==3)v.push_back(pii(v[m].first,v[m].second+1));
            }
        //cout<<"size :"<<v.size()<<endl;
        sort(all(v));
        ans.second=abs(v[0].first-v.back().first);
        rep(i,v.size())swap(v[i].first,v[i].second);
        sort(all(v));
        ans.first=abs(v[0].first-v.back().first);
        cout<<ans.sec+1<<" "<<ans.fst+1<<endl;
    }
}