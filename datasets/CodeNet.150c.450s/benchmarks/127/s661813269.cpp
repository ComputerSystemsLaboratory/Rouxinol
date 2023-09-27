
// Organize Your Train part II
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1142&lang=jp

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>
#include<set>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

string reverse(string train) {
    string res = "";
    for (int i = train.size() - 1; i >= 0; --i) {
        res += train[i];
    }
    return res;
}

int main() {
    int M;
    cin >> M;
    for (int nth = 0; nth < M; ++nth) {
        set<string> result;
        string train;
        cin >> train;

        for (int i = 0; i < train.size(); ++i) {
            string t1 = train.substr(0, i);
            string t2 = train.substr(i);
            result.insert(t1 + t2);
            result.insert(reverse(t1) + t2);
            result.insert(t1 + reverse(t2));
            result.insert(reverse(t1) + reverse(t2));
            result.insert(t2 + t1);
            result.insert(reverse(t2) + t1);
            result.insert(t2 + reverse(t1));
            result.insert(reverse(t2) + reverse(t1));
        }
        cout << result.size() << endl;
    }
	return 0;
}