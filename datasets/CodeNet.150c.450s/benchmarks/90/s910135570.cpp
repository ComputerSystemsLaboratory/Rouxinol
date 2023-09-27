#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int main() {
    int n;
    int times[101]={};

    while(cin>>n){
        if(n==0)break;
        times[n]++;
    }
    int maxi=-1;
    rep(i,100+1){
        maxi=max(maxi,times[i]);
    }
    rep(i,100+1){
        if(times[i]==maxi){
            cout<<i<<endl;
        }
    }

    return 0;
}