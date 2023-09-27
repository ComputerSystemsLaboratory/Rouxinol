#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
priority_queue<int> p;

int main() {
    string str;
    while(cin >> str, str != "end"){
        if(str == "insert"){
            int x;
            cin >> x;
            p.push(x);
        } else if(str == "extract"){
            cout << p.top() << endl;
            p.pop();
        }
    }
    return 0;
}