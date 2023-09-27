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
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX 1e7
int main(){
    int n;
    while(cin >> n,n){
        vi v(n+1,0);
        vi v2(n+1,0);
        int ans1 = 0; int ans2 =0;
        rep(i,n){
            cin >> v[i] >> v2[i];
            if(v[i]>v2[i])
                ans1+=v[i]+v2[i];
             if(v[i] < v2[i])
                ans2 += v[i]+v2[i];
             if(v[i] == v2[i]){
                ans1+=v[i]; ans2+= v2[i];}
        }
        cout << ans1 << " " << ans2 << endl;
    }
}