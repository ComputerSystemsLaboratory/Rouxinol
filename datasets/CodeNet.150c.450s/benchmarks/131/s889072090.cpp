#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cctype>
#include<climits>
#include<bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i,n) for(i=0;i<n;i++)
#define fin(ans) cout<<(ans)<<endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int,int> >
#define vvi vector<vector<int> >
#define vvc vector<vector<char> >
#define vvs vector<vector<string> >
#define P 1000000007
using namespace std;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
const long long LLINF=1LL<<60;
//set<int>::iterator it;
//|\_
//g++ -std=c++1z temp.cpp
//./a.out



int main(void){ios::sync_with_stdio(false);cin.tie(0);
//////////////////////////////////////////////////////
    
    string s,t,u;
    int sn,tn,un;
    int i,n,ans,N;
    vector<int> v;
    set<int> st;
    while(1){
        cin>>s>>N;
        if(s=="0"&&N==0)break;
        rep(i,s.length()-N)s='0'+s;
        st.clear();
        v.clear();
        ans=0;
        n=atoi(s.c_str());
        st.insert(n);
        v.push_back(n);
        while(1){
            while(s.length()<N)s='0'+s;
            t=s;
            u=s;
            sort(t.begin(),t.end());
            sort(u.rbegin(),u.rend());
            n=atoi(u.c_str())-atoi(t.c_str());
            if(st.find(n)!=st.end()){
                rep(i,v.size()){
                    if(v[i]==n){
                        cout<<i<<" ";
                        cout<<n<<" ";
                        cout<<v.size()-i<<endl;
                        break;
                    }
                }
                break;
            }
            else {
                st.insert(n);
                v.push_back(n);
            }
            s="";
            while(n>0){
                s+=n%10+'0';
                n/=10;
            }
            s.reserve();
            ans++;
        }
        // rep(i,v.size())cout<<v[i]<<" ";
    }
    
//////////////////////////////////////////////////////
return 0;}






