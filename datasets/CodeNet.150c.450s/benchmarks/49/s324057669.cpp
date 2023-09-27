
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <iomanip>
#include <functional>
using namespace std;
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < (int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;

int main(int argc, char* argv[])
{
    int ninzu=0;
    while(cin >> ninzu,ninzu){
        int ans=0;
        int i=0;
        int temp=0;
        int a=0;
        
        vector <int>  s;
        
        
        for(i=0;i<ninzu;i++){
            cin >> a;
            if(temp < a){
                temp = a;
            }
            s.push_back(a);
        }
        
        sort( ALL(s) );
        
        for(i=0;i<s.size()-1;i++)
            ans+= s[i];
        
        ans = (ans- s[0]) / (i-1);
        
        cout << ans << endl;
        ans=0;
    }
    
    return 0;
}