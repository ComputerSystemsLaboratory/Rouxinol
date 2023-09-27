#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;
const int MOD = 1000000007;

typedef long long ll;
typedef pair<int, int> pr;

int main(){
    int m;
    string train;
    cin >> m;
    set<string> pat;
    while(m--){
        cin >> train;
        for(int i = 1; i < train.size(); i++){
            string s1 = train.substr(0, i);
            string s2 = train.substr(i);
            string r1(s1), r2(s2);
            reverse(r1.begin(), r1.end());
            reverse(r2.begin(), r2.end());
            pat.insert(s1 + s2);
            pat.insert(s2 + s1);
            pat.insert(r1 + s2);
            pat.insert(r2 + s1);
            pat.insert(s1 + r2);
            pat.insert(s2 + r1);
            pat.insert(r1 + r2);
            pat.insert(r2 + r1);
        }
        cout << pat.size() << endl;
        pat.clear();
    }
    
    return 0;
}