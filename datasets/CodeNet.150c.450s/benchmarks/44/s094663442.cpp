#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
using namespace std;
#define SQR(x) ((x)*(x))
#define PI acos(-1.)
#define INF (INT_MAX/100)
#define mid(x,y) (x+y)/2
#define ll long long
#define sz(v) ((int)(v).size())
#define rep(i, n) for (int i=0; i<(n); ++i)
#define repf(i, a, b) for (int i=(a); i<=(b); ++i)
#define repd(i, a, b) for (int i=(a); i>=(b); --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define pf push_front
#define itr iterator

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<int,int> pii;
typedef map<int,int> mii;

struct Mat{
    int it[4];
    bool input(){
        rep(i, 4) if (scanf("%d", &it[i])==EOF) return false;
        return true;
    }
};

int i,j,k,m,n,l;
Mat a, b;


int main(){
    while (a.input()){
        b.input();
        int x=0 ,y=0;
        rep(i, 4)
            rep(j, 4) if (a.it[i]==b.it[j]){
                if (i==j) x++;
                else y++;
            }
        printf("%d %d\n", x, y);
    }

    return 0;
}