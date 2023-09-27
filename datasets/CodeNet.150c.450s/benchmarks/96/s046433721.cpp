#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)


vector<string> v{"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        char ch;
        int num=0;
        
        string ans = "";
        rep(i,s.size()){
            if(s[i]=='0'){
                if(num==0)continue;
                ans+=v[ch-'0'][(num-1)%((int)v[ch-'0'].size())];
                num = 0;
            }else{
                if(num==0)ch = s[i];
                num++;
            }
        }
        cout<<ans<<endl;
    }
}