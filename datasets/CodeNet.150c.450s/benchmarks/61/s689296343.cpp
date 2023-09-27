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
    int n,a,b,c,x,cnt=0,ans;
    int y[10000];
    while(1){
        cin >> n >> a >> b  >> c  >> x;
        if(n==0 && a==0 && b==0 && c==0 && x==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            cin >> y[i];
            while(cnt<=10000){
                if(i==0 && y[i]==x){
                    break;
                }
                ans=(a*x+b)%c;
                cnt++;
                if(ans==y[i]){
                    x=ans;
                    break;
                }
                x=ans;
            }
        }
        if(cnt>10000)
            cout << -1 << endl;
        else
            cout << cnt << endl;
        cnt=0;
        ans=0;
    }
    return 0;
}