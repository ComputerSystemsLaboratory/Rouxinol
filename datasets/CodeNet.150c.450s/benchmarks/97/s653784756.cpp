#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define rep(i,a) for(int i = 0;i < (a); i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)
#define repd(i,a,b) for(int i = (a); i >= (b); i--)
#define repit(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define all(u) (u).begin(),(u).end()
#define rall(u) (u).rbegin(),(u).rend()
#define UNIQUE(u) (u).erase(unique(all(u)),(u).end())
#define pb push_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int main() {
    int N;
    while(cin >> N, N){
        vector<pii> sq(N);
        sq[0] = mp(0,0);
        int mx = 0, Mx = 0, my = 0, My = 0;
        repi(i,1,N){
            int n, d;
            cin >> n >> d;
            int nx = sq[n].first+dx[d];
            int ny = sq[n].second+dy[d];
            mx = min(mx, nx); Mx = max(Mx, nx);
            my = min(my, ny); My = max(My, ny);
            sq[i] = mp(nx, ny);
        }
        cout << Mx - mx + 1 << ' ' << My - my + 1<< endl;
    }
    return 0;
}