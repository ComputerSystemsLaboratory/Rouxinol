#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

int C[10004];
int A[20000006];
int B[20000006];

int main() {
    rep(i,10004) C[i]=0;
    int n;
    cin>>n;
    rep(i,n) {
        scanf("%d",A+i+1);
        C[A[i+1]]++;
    }
    rep(i,10003) C[i+1]+=C[i];
    rep(i,n+1) if(i) {
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    }
    rep(i,n+1) if(i) {
        if(i>1) printf(" ");
        printf("%d",B[i]);
    }
    puts("");
    return 0;
}