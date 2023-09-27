#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
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
    
    while(1){
        int n,p;
        int cnt=0,ans;
        cin >> n >> p;
        
        if(n == 0 && p == 0){
            return 0;
        }
        int stone[50] = {0};
        
        while(1){
            
            for (int i=0; i<n; i++) {
                if(p != 0){
                    p--;
                    stone[i]++;
                }else{
                    p = stone[i];
                    stone[i] =0;
                }
                if(stone[i] == 0){
                    cnt++;
                }else{
                    ans=i;
                }
            }
            if(cnt == n-1 && p==0){
                cout << ans << endl;
                break;
            }
            cnt =0;
            ans = 0;
                
        }
    }
    return 0;
}