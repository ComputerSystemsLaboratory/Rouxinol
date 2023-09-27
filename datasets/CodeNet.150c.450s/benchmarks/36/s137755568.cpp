#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#define debug(x) cerr << #x << ':' << x << endl
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define ALL(c) (c).begin(), (c).end()
using namespace std;
typedef long long ll;

int main(){
    int d;
    while(cin >> d){
        int ans = 0;
        for(int i=1; i<600/d; i++){
            
            ans+=d * ( i*d * i*d );
        }

        cout << ans << endl;
    }
    return 0;
}
