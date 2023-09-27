#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <map>
#include <stdlib.h>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1000000000000000LL
#define rep(i,n) for(i=0;i<n;i++)

typedef pair<int,int> pii;
int i,j;


int main() {
    while(1){
        ll n;
        cin>>n;
        if(n==0)break;
        ll a[10000]={};
        rep(i,n)
            cin>>a[i];
        sort(a,a+n);
        ll m=INF;
        rep(i,n-1)
            m=min(m,abs(a[i]-a[i+1]));
        cout<<m<<endl;
    }
    return 0;
}