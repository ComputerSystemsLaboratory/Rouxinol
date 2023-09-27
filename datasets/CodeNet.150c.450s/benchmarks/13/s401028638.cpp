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
    string s1, s2;
    cin >> s1 >> s2;
    string tmp = s1+s1;
    
    if(tmp.find(s2)!=string::npos)  cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
