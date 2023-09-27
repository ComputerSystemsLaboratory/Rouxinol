#include <iostream>
using namespace std;
int main() {
    string s,p,ans="No";
    cin >> s >> p;
    int i,j,ss=s.size(),ps=p.size();
    for (i=0;i<ss;i++) {
        for (j=0;j<ps;j++) {
            if (s[(i+j)%ss] != p[j]) break;
        }
        if (j>=ps) {
            ans="Yes";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}