
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
    int n , r;
    while(cin >> n >> r,n!=0 && r!=0){
        int p,c;
        int i=0,j=0;
        int temp[50];
        int huda[50];
        for(i=0;i<n;i++){
            huda[i] = i+1;
        }
        while(r){
            cin >> p >>c;
            for(i = 0;i < c;i++){
                
                temp[i] = huda[((n-1)-(p-2))-(c-i)];
//                cout << temp[i] << endl;
            }
            
            for (j=p-1; j>0;j-- ) {
                huda[(n-j)-c] = huda[n-j];
            }
//            for(i=0;i<10;i++)cout <<huda[i] <<" ";
//            cout<<endl;
            for(i=0;i<c;i++){
                huda[n-(c-i)] = temp[i];
            }
//            for(i=0;i<10;i++)cout <<huda[i] <<" ";
            r--;
        }
            cout << huda[n-1] << endl;
    }
    return 0;
}