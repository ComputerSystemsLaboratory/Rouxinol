#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)

using namespace std;

int main(){
    // x = (A*x+B) mod C
    int N,A,B,C,X;
    while(cin >> N >> A >> B >> C >> X,N){
        int Y[100];
        int cnt = 0;
        REP(i,N){
            cin >> Y[i];
        }
        int i = 0;
        while(1){
            if(cnt > 10000){
                cout << -1 << endl;
                break;
            }else{
                if(X == Y[i]){
                    if(i == N - 1){
                        cout << cnt << endl;
                        break;
                    }
                    i++;
                }
                cnt++;
                X = (A*X+B)%C;
            }
        }
    }
    return 0;
}