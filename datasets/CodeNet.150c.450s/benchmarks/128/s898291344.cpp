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
    string s;
    cin >> s;
    reverse(ALL(s));
    cout << s << endl;
    return 0;
}
