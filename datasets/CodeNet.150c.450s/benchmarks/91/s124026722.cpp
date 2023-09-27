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
#define MAX  999999
int main (){
    
    /*?´???°???????´?????????????*/
    vector<int>Primenumber(MAX+1,0);
    /*?´???°???????´???????????????????*/
    int n;
    while(cin >> n){
        bv check(MAX+1,true);
    for(int i = 2; i<=n;i++){
        if(check[i]){
            /*true?????£?????¨???????????°????????????false??§*/
            for(int j = 2;i*j<=n;j++)
                check[i*j] = false;
        }
    }
    int ans = 0;
    for(int i = 2;i<=n;i++)
        if(check[i])
            ans++;
    cout << ans << endl;
    }
}