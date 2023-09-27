#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) {
        cin >> S.at(i);
    }
    int C0,C1,C2,C3;
    C0 = 0;
    C1 = 0;
    C2 = 0;
    C3 = 0;
    for(int i=0;i<N;i++) {
        if (S[i] == "AC") {
            C0++;
        }else if (S[i] == "WA") {
            C1++;
        }else if(S[i] =="TLE") {
            C2++;
        }else if(S[i] =="RE") {
            C3++;
        }
    }
    cout << "AC x " << C0 << endl;
    cout << "WA x " << C1 << endl;
    cout << "TLE x " << C2 << endl;
    cout << "RE x " << C3 << endl;
}