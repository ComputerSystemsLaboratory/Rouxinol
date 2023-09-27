#include <set>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int M;
    cin >> M;
    for (int i=0; i<M; ++i) {
        string S;
        cin >> S;
        typedef set<string> set_t;
        set_t all;
        all.insert(S);
        for (int j=1; j<S.size(); ++j) {
            string L;
            for (int k=0; k<j; ++k){
                L += S[k];
            }
            string R;
            for (int k=j; k<S.size(); ++k){
                R += S[k];
            }
            string L2=L, R2=R;
            reverse(L2.begin(),L2.end());
            reverse(R2.begin(),R2.end());
            all.insert(L+R2);
            all.insert(L2+R);
            all.insert(L2+R2);
            all.insert(R+L);
            all.insert(R+L2);
            all.insert(R2+L2);
            all.insert(R2+L);
        }
        cout << all.size() << endl;
    }
}