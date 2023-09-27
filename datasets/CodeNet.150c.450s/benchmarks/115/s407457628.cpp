//	created : 16/03/15
// 	author   : Rp7rf
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 1e9
 
int main(void){
    int q;
    string a,b;
    int dp[1010][1010];
    cin>>q;

    while(q--){
        cin>>a>>b;
        for(int j = 0 ; j < a.size() ; j ++){
            for(int i = 0 ; i < b.size() ; i ++){
                if(a[j] == b[i]){
                    dp[j+1][i+1] = dp[j][i]+ 1;
                }else{
                    dp[j+1][i+1] = max(dp[j][i+1],dp[j+1][i]);
                }
            }
        }
        cout<<dp[a.size()][b.size()]<<endl;
    }
}