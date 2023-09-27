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

vector<string> weeks = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
int mm,dd;
void solve() {
    int day = 2;
    for(int i=1;i<mm;i++) day += month[i-1];
    day += dd;
    day %= 7;
    cout<<weeks[day]<<endl;

}
int main() {
    while(cin>>mm>>dd) {
        if(mm+dd==0) break;
        solve();
    }
    return 0;
}