#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};

int main(){
    int m; cin>>m;
    while(m--){
        string s; cin>>s;
        int n=s.size();
        set<string> st;

        for(int i=1; i<n; i++){
            string head = s.substr(0, i);
            string tail = s.substr(i, n-i);

            st.insert(head + tail);
            st.insert(tail + head);

            reverse(tail.begin(), tail.end());
            st.insert(head + tail);
            st.insert(tail + head);
            reverse(tail.begin(), tail.end());

            reverse(head.begin(), head.end());
            st.insert(head+tail);
            st.insert(tail + head);

            reverse(tail.begin(), tail.end());
            st.insert(head + tail);
            st.insert(tail + head);
        }

        cout << st.size() << endl;
    }
}
