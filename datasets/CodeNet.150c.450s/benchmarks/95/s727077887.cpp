#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>
#include <stack>
#include <tuple>
#include <array>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); i++)


typedef long long int ll;
typedef double D;      // ??§?¨?????????????double???long double?????????
typedef complex<D> P;  // Point
typedef pair<P, P> L;  // Line
typedef vector<P> VP;


const int INF = (1<<30) - 1;
const D EPS = 1e-9;

#define X real()
#define Y imag()
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)


//g++ -std=c++0x -msse4.2 -O3
//#include <bits/stdc++.h>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout.precision(16);
    
    int N;
    while(cin>>N, N){
        bool ldown = false, rdown = false;
        string s;
        vector<string> command(N);
        for(int i=0; i<N; i++)
            cin >> command[i];
        
        int ans = 0;
        for(int i=1; i<N; i++){
            if((command[i]=="lu" && command[i-1]=="ru")||
               (command[i]=="ru" && command[i-1]=="lu")||
               (command[i]=="ld" && command[i-1]=="rd")||
               (command[i]=="rd" && command[i-1]=="ld"))
                ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}