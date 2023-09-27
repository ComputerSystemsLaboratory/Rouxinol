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
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
using namespace std;
typedef pair<int, int> pii;
#define MAX 99999999
int main(){
    int n;
    while(cin>>n,n){
        vi v(n+1,0);
        rep(i,n)cin>>v[i];
        ll ans=-INF, temp;
        for(int i=0;i<n;i++){
            temp=0;
            for(int j=i;j<n;j++){
                temp+=v[j];
                ans=max(ans,temp);
            }
        }
        if(n==1)cout<<v[0]<<endl;
        else cout<<ans<<endl;
    }
}