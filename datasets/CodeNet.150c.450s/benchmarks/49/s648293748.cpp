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
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
    while(true){
        int n; cin >> n; if(n ==0 ) break;
        int sum = 0; int cou = 0;
        vi v(n,INF);
        rep(i,n){cin >> v[i];}

        sort(v.begin(),v.begin()+n);
        v.erase(v.begin());
        v.erase(v.end()-1);
        rep(i,n-2){
            sum+=v[i]; cou++;
        }
        cout << sum /cou << endl;
    }
}