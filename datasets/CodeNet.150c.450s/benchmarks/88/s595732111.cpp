#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int (i)=0;(i) < (N); (i)++)
#define all(V) V.begin(), V.end()
using i64 = long long;
using P = pair<int,int>;


int main(){
    int H,W;
    const int MAX_W = 200;
    while(cin >> H >> W, W != 0){
        int C = H*H + W*W;
        int minH = MAX_W, minW = MAX_W;
        int minC = minH*minH + minW*minW;
        for(int w = 1; w <= MAX_W; w++){
            for(int h = 1; h < w; h++){
                int c = w*w + h*h;
                if((c > C && minC >= c ) || (c == C && H < h)){
                    minH = h;
                    minW = w;
                    minC = c;
                }
            }
        }

        cout << minH << " " << minW << endl;
    }
}

