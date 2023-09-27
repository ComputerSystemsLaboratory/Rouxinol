#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
ll n;
int main(){
    while(1){
        cin>>n;
        if(n==0) break;
        int right=0;
        int left=0;
        int cnt=0;
        int b=-1;
        string s,t;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(s=="ru") { //b=0
                right++;
                if(right==left && b==1) {
                    //cout<<i<<s<<endl;
                    cnt++;
                }
                b=0; 
            }
            else if(s=="lu") { //b=1
                left++;
                if(right==left && b==0) {
                    //cout<<i<<s<<endl;
                    cnt++;
                }
                b=1;
            }
            else if(s=="rd") { //b=2
                right--;
                if(right==left && b==3) {
                    //cout<<i<<s<<endl;
                    cnt++;
                }
                b=2;
            }
            else if(s=="ld") { //b=3
                left--;
                if(right==left && b==2) {
                    //cout<<i<<s<<endl;
                    cnt++;
                }
                b=3;
            }
        }
        cout<<cnt<<endl;
        //cout<<endl;
    }
    return 0;
}
