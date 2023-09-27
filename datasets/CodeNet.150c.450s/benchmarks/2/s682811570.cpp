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

int partition(int *a,int r,int p) {
    int x,i,j,t;
    x=a[r];
    i=p-1;
    for(int j=p;j<r;j++) {
        if(a[j]<=x) {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;

}

int n;
int a[100005];
int main() {
    cin>>n;
    rep(i,n) cin>>a[i];
    int q = partition(a,n-1,0);
    rep(i,n) {
        if(i) cout<<" ";
        if(i==q) cout<<"[";
        cout<<a[i];
        if(i==q) cout<<"]";
    }
    cout<<endl;
    return 0;
}