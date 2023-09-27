#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

struct P {
    int w,h;

    P(int _w,int _h) {
        w = _w;
        h = _h;
    }

    bool operator<(const P& p) const {
        if(w*w + h*h == p.w*p.w + p.h*p.h) return h < p.h;
        return w*w + h*h < p.w*p.w + p.h*p.h;
    }
};

int main()
{
    vector<P> v;
    REP(i,1,151) {
        REP(j,i+1,151) {
            v.push_back(P(j,i));
        }
    }

    sort(v.begin(),v.end());
    
    int n,m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        
        rep(i,v.size()) {
            if(n == v[i].h && m == v[i].w) {
                cout << v[i+1].h << " " << v[i+1].w << endl;
                break;
            }
        }
    }

    return 0;
}