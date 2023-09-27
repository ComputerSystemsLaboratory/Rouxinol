#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
    int n;

    while(cin >> n && n) {
        map<char,char> ch;
        rep(i,n) {
            char a,b;
            cin >> a >> b;

            ch[a] = b;
        }

        int m;
        cin >> m;

        rep(i,m) {
            char c;
            cin >> c;

            if(ch.find(c) == ch.end()) cout << c;
            else cout << ch[c];
        }
        cout << endl;
    }

    return 0;
}