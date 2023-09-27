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
    ll number; cin >> number;
    vvl dp(101,vl(100,-INF));
    vi array(100,0);
    rep(i,number)
    cin >> array[i]; dp[0][array[0]] = 1;
    rep(i,number-1){
        rep(j,21){
            if(dp[i][j] != -INF){
                //cout << "dp[i][j] " << i << j << endl;
                int temp1 = j+array[i+1];
                int temp2 = j-array[i+1];
                if(0<=temp1&&temp1<=20){
                    if(dp[i+1][temp1] == -INF)
                        dp[i+1][temp1] = 0;
                    dp[i+1][temp1]+=dp[i][j];}
                if(0<=temp2 && temp2<=20){
                    if(dp[i+1][temp2] == -INF)
                        dp[i+1][temp2] = 0; dp[i+1][temp2]+=dp[i][j];
                }
            }
        }
    }
    cout <<dp[number-2][array[number-1]]<< endl;
    return 0;
}