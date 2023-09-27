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
    
    int n,m;
    cin >> n;
    bool Open = 0;
    string c;
    vector<string> str;
    
    for(int i=0;i<n ;i++){
        
                cin >> c;
                str.push_back(c);
    }
    
    cin >> m;
    for(int i=0;i<m;i++){
        bool f = 1;
        string c;
        cin >> c;
        for(int j=0;j<n;j++){
        
            if(str[j] == c && Open == 0){
                cout << "Opened by " << c << endl;
                Open = 1;
                f = !f;
                break;
            }
            if(str[j] == c && Open == 1){
                cout << "Closed by " << c << endl;
                Open = 0;
                f = !f;
                break;
            }
        }
        if(f){
            cout << "Unknown " << c << endl;
            f = !f;
        }
    }
    
    return 0;
}