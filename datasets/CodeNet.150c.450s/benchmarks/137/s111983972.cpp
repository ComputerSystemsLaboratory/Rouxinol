#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n;
    ostringstream os;
    cin >> n;
    set<string> dict;
    REP(i, n){
        string order, str;
        cin >> order >> str;
        if(order == "insert")
            dict.insert(str);
        else if(order == "find"){
            if(dict.count(str))
                os << "yes" << endl;
            else
                os << "no" << endl;
        }
    }
    cout << os.str();
    return 0;
}