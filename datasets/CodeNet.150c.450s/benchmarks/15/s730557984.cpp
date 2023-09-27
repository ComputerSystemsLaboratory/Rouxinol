#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

stack<tuple<int, int, int> > area;
stack<int> res;
stack<int> downs;

int integrate(int i, int j){
    int value = j-i;
    while(!area.empty() && get<1>(area.top()) >= i && get<2>(area.top()) <= j){
        value += get<0>(area.top());
        area.pop();
    }
    return value;
}

int main() {
    int n, q;
    cin >> n;
    int a[n];
    REP(i, n) cin >> a[i];
    cin >> q;
    int b[q];
    int count = 0;
    REP(i, q) cin >> b[i];

    REP(j, q) REP(i, n){
        if(a[i] == b[j]){
            count++;
            break;
        }
    }

    cout << count << endl;
    return 0;
}