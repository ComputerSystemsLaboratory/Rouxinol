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
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int> PI;
#define MAX 99999999
char hoge[]={"mcxi"};
int main(){
    int  n;cin>>n;
    rep(Q,n){
        string s;
        string t;
        map<char,int>m;
        cin>>s>>t;
        rep(i,4)m[hoge[i]]=0;
        rep(i,s.size()){
            if(s[i]>=96){
                if(i-1>=0&&s[i-1]<96) m[s[i]]+=s[i-1]-48;
                else if(s[i]>=96) m[s[i]]++;
            }
        }
         //cout<<"c:"<<m['c']<</*" i"<<m['i']<<*/endl;
        rep(i,t.size()){
            if(t[i]>=96){
                if(i-1>=0&&t[i-1]<96) m[t[i]]+=t[i-1]-48;
                else if(t[i]>=96) m[t[i]]++;
            }
        }
        //cout<<"c:"<<m['c']<</*" i"<<m['i']<<*/endl;
        for(int i=3;i>=0;i--)
            if(m[hoge[i]]>=10) {
                int temp=0;
                temp=m[hoge[i]]/10;
                m[hoge[i]]%=10;
                m[hoge[i-1]]+=temp;
            }
        
       //cout<<"x:"<<m['x']<<" i"<<m['i']<<endl;
        rep(i,4){
            if(m[hoge[i]]>1)cout<<m[hoge[i]]<<hoge[i];
            if(m[hoge[i]]==1)cout<<hoge[i];
        }
        cout<<endl;
    }
}