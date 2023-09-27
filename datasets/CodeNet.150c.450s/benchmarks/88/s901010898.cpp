#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;

int w,h;
bool is_small(int h1,int w1,int h2, int w2){
    int d1 = pow(h1,2) + pow(w1,2);
    int d2 = pow(h2,2) + pow(w2,2);
    if(d1 < d2) return true;
    else if(d1 > d2) return false;
    else if(d1 == d2 && h1 < h2) return true;
    return false;
}
int main(){
    int h,w;
    while(cin >> h >> w,h) {
        int mnh = 1000,mnw = 1000;
        REP(nh,1,151) REP(nw,nh + 1,151){
            if(h == nh && w == nw) continue;
            if(is_small(nh,nw,h,w)) continue;
            if(is_small(nh,nw,mnh,mnw)) {
                mnh = nh; mnw = nw;
            }
        }
        cout << mnh << " " << mnw << endl;
    }
    return 0;

}

