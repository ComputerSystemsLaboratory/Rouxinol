#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;


int main(void){
    int N;
    int S[200][2];
    int h,w;
    while(cin >> N,N){
        S[0][0]=0;
        S[0][1]=0;
        rep(i,N-1){
            int n,d;
            cin >> n >> d;
            S[i+1][0]=S[n][0];
            S[i+1][1]=S[n][1];
            if(d ==0)
                S[i+1][0]=S[n][0]-1;
            else  if(d==2)
                S[i+1][0]=S[n][0]+1;
            else if (d==1)
                S[i+1][1]=S[n][1]-1;
            else if(d==3) 
               S[i+1][1]=S[n][1]+1;                
            }
        int xmin=0,xmax=0,ymin=0,ymax=0;
        rep(i,N){
            if(S[i][0]>xmax)
                xmax=S[i][0];
            else if(xmin > S[i][0])
                xmin=S[i][0];
            if(S[i][1]>ymax)
                ymax=S[i][1];
            else if( ymin > S[i][1])
                ymin=S[i][1];
        }
            h=ymax-ymin+1;
            w=xmax-xmin+1;
        cout << w << ' '<< h <<  endl; 
        }
    return 0;
}