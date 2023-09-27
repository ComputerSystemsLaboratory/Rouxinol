#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
#include <string>
using namespace std;
int main(){
    int M;
    cin >> M;
    string S;
    queue<int> Q;
    for(int i = 0; i<M; ++i) {
        cin >> S;
        typedef set<string> set_t;
        set_t all;
        all.insert(S);
        for (size_t i=1; i<S.size(); ++i) {
            string L;
            L = S.substr(0,i);
            string R;
            R = S.substr(i);
            string L2, R2;
            L2 = L;
            reverse(L2.begin(), L2.end());
            R2 = R;
            reverse(R2.begin(), R2.end());
            all.insert(L + R2);
            all.insert(L2 + R);
            all.insert(L2 + R2);
            all.insert(R + L);
            all.insert(R + L2);
            all.insert(R2 + L);
            all.insert(R2 + L2);
        }
        Q.push(all.size());
    }
    while(! Q.empty()) {
      cout << Q.front() << endl;
      Q.pop();
    }
}