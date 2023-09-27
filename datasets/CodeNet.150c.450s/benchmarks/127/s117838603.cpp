#include "bits/stdc++.h"
#define ALL(a) a.begin(),a.end()
using namespace std;

set<string> operation(const string train) {
    set<string> result;
    int div = 1;
    while (div < train.length()) {
        string sub1 = train.substr(0, div);
        string sub2 = train.substr(div);
        string sub1r = sub1;
        string sub2r = sub2;
        reverse(ALL(sub1r));
        reverse(ALL(sub2r));
        string sub1c[] = {sub1, sub1r};
        string sub2c[] = {sub2, sub2r};
        
        for (string s1 : sub1c) {
            for (string s2 : sub2c) {
                result.insert(s1+s2);
                result.insert(s2+s1);
            }
        }
        ++div;
    }
    return result;
}
int main(void){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string train;
        cin >> train;
        set<string> res = operation(train);
        cout << res.size() << endl;
    }
    
    return EXIT_SUCCESS;
}