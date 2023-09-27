#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(x) for(auto it=(x).begin();it!=(x).end();it++) 
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main(){
    int n;
    cin>>n;
    rep(i,0,n){
        set<string> st;
        string s;
        cin>>s;
        string ls,rs;
        rep(i,0,s.length()){
            ls=s.substr(0,i);
            rs=s.substr(i,s.length()-i);
            rep(j,0,2){
                rep(k,0,2){
                    st.insert(ls+rs);
                    st.insert(rs+ls);
                    reverse(all(ls));
                    
                }
                reverse(all(rs));
            }
        }
        
        cout<<st.size()<<endl;
    }
    
    return 0;
}

