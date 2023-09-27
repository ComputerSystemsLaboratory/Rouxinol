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
int n;
int a[102];
void plot() {
    rep(i,n) cout<<(i==0?"":" ")<<a[i];
    cout<<endl;
}
void insert_sort() {
    for(int i=1;i<n;i++) {
        plot();
        int v=a[i];
        int j=i-1;
        while(j>=0 && a[j] > v) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=v;
    }
    plot();

}

int main() {
    cin>>n;
    rep(i,n) cin>>a[i];
    insert_sort();
    return 0;
}