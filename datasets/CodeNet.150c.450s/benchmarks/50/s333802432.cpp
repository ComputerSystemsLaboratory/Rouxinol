// ???#include <bits/stdc++.h>
#include <iostream>

// #define MP make_pair
// #define PB push_back
// #define ALL(x)  (x).begin(),(x).end()
// #define RALL(x) (x).rbegin(),(x).rend()
// #define RANGEBOX(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
// #define RANGE(x, l, r) ((l) <= (x) && (x) <= (r))
// #define rep(i, N)  for (int i = 0; i < (int)(N); i++)
// #define rrep(i, N) for (int i = N - 1; i >= 0; i--)
// #define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
// #define RREP(i, N, last) for (int i = (init - 1); i >= last; i--)
// #define PB push_back

using namespace std;

// typedef long long LL;
// typedef unsigned long long ULL;
// typedef vector<int> VI;
// typedef vector<VI > VVi;
// typedef vector<string> VS;
// typedef vector<LL> VLL;
// typedef pair<int,int> PII;

// const int    INF  = 0x3f3f3f3f;
// const LL     INFL = 0x3f3f3f3f3f3f3f3fLL;
// const double DINF = 0x3f3f3f3f;

int main(){
	ios::sync_with_stdio(false);
    int sum=0;
    int x;
    int cnt=0;
    while(1){
        cin>>x;
        if(!x)
            return 0;
        sum=1000-x;
        while(sum>0){
            if(sum>=500){
                cnt++;
                sum-=500;
            }
            else if(sum>=100){
                cnt++;
                sum-=100;
            }
            else if(sum>=50){
                cnt++;
                sum-=50;
            }
            else if(sum>=10){
                cnt++;
                sum-=10;
            }
            else if(sum>=5){
                cnt++;
                sum-=5;
            }
            else{
                cnt++;
                sum-=1;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }


    return 0;
}