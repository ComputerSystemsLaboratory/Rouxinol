#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using mii=map<int,int>;
using psi=pair<string,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define MOD (1e9+7)
int main(void){
    int n,in;
    string s;
    cin>>n;
    list<int> l;
    rep(i,n){
        cin>>s;
        if(s=="insert"){
            cin>>in;
            l.push_front(in);
        }
        else if(s=="delete"){
            cin>>in;
            for(auto itr=l.begin();itr!=l.end();itr++){
                if(*itr==in){
                    itr=l.erase(itr);
                    break;
                }
            }
        }
        else if(s=="deleteFirst")l.pop_front();
        else l.pop_back();
    }
    auto goal=--l.end();
    for(auto itr=l.begin();itr!=l.end();itr++){
        cout<<*itr<<(itr!=goal?" ":"");
    }
    cout<<endl;
}




