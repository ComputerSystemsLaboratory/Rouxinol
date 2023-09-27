#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,N) for(int i = 0; i<(int)(N); i++)
#define REP(i,k,N) for(int i = k; i<(int)(N); i++)
#define INF 10000000
typedef long long ll;
using namespace std;
const int MAX_N = 1001;
int d[MAX_N][MAX_N];
int main(){
        string ch1,ch2;
        cin >> ch1;
        cin >> ch2;
        rep(y,ch1.size()+1) rep(x,ch2.size()+1){
                if(y==0) {d[y][x]=x; continue;}
                if(x==0) {d[y][x]=y; continue;}

                int m_l_u = min(d[y-1][x]+1,d[y][x-1]+1);
                if(ch1[y-1] == ch2[x-1]) {
                        d[y][x] = min(m_l_u,d[y-1][x-1]);
                }else{
                        d[y][x] = min(m_l_u,d[y-1][x-1]+1);
                }

        }
        cout << d[ch1.size()][ch2.size()] << endl;
        return 0;
}

