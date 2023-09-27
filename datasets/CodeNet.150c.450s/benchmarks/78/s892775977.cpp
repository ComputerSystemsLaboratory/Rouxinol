#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;
typedef long long ll;

vector<int> v,v2;
int d[1000005];
int d2[1000005];

int main()
{
    rep(i,200) {
        int t = i * (i+1) * (i+2);
        t /= 6;

        if(t%2 == 0) {
            v.push_back(t);
        }
        else {
            v.push_back(t);
            v2.push_back(t);
        }
    }

    fill(d,d+1000005,INF);
    fill(d2,d2+1000005,INF);

    d[0] = 0;
    d2[0] = 0;

    rep(i,1000005) {
        rep(j,v.size()) {
            int next = i + v[j];
            if(next < 1000005) {
                d[next] = min(d[next],d[i]+1);
            }
        }

        rep(j,v2.size()) {
            int next = i + v2[j];
            if(next < 1000005) {
                d2[next] = min(d2[next],d2[i]+1);
            }

        }
    }

    int n;
    while(cin >> n && n) {
        cout << d[n] << " " << d2[n] << endl;
    }

    return 0;
}