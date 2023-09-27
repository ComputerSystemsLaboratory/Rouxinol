#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <utility>
#include <numeric>
#include <algorithm>
#include <functional>
#include <cctype>
#include <complex>
#include <string>
#include <sstream>

using namespace std;

#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define mp(a,b) make_pair((a),(b))
#define eq ==

typedef long long ll;
typedef complex<double> point;
typedef pair<int,int> pii;

// →↑←↓
const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};


const double EPS = 1e-9;

int main(){
    while(true){
        int N,M;
        cin >> N >> M;
        if(N == 0) break;

        vector<int> Hs;
        Hs.push_back(0);
        for(int i=0;i<N;i++){
            int h;
            cin >> h;
            Hs.push_back(Hs.back()+h);
        }

        vector<int> Ws;
        Ws.push_back(0);
        for(int i=0;i<M;i++){
            int w;
            cin >> w;
            Ws.push_back(Ws.back()+w);
        }

        vector<int> HW(Hs.back()+Ws.back()+10);
        for(int i=0;i<Hs.size();i++){
            for(int j=0;j<Ws.size();j++){
                int h = Hs[i];
                int w = Ws[j];

                int hw = h + w;
                HW[hw]++;
            }
        }
        int cnt = 0;
        for(int i=0;i<HW.size();i++){
            if(HW[i] >= 2){
                cnt += HW[i]*(HW[i]-1)/2;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}