#include <bits/stdc++.h>
using namespace std;

#define int long long
#define DEBUG(x) cerr <<#x<<":"<<x<<endl;
#define DEBUG2(x, y) cerr <<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define DEBUG3(x, y, z) cerr <<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl;
#define DEBUGVC(x) cerr <<#x<<": "; for(auto a:x) cerr << a <<" "; cerr << endl;
#define DEBUGMP(x) cerr <<#x<<":"<<endl; for(auto a:x) cerr << a.first <<" "<< a.second << endl;
#define MAX_N (1000006)
#define INF (1LL << 60)
const int MOD = (int)1e9+7;


signed main() {
    int T;
    cin >> T;

    vector<string> vcs = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    for(int t=0; t<T; t++) {
        string s;
        cin >> s;

        int idx = -1;
        int num = 0;
        bool flag = false;
        for(int i=0; i<s.length(); i++){
            //cout << i <<" "<< s[i] <<" "<< idx << endl;
            if (s[i] == '0') {
                //cout << i <<" num:"<< num <<" idx:"<< idx <<" flag:"<< flag << endl;
                if (!flag) cout << "";
                else cout << vcs[num-1][idx];
                //cout << endl;
                idx = -1;
                flag = false;
            } else {
                flag = true;
                num = s[i] - '0';
                idx = (idx+1)%vcs[num-1].length();
                //cout << vcs[num-1][idx] << endl;
            }
            //cout << s[i] << endl;
        }
        cout << endl;
    }
}
