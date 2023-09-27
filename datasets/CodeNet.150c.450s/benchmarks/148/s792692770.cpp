#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int AC_ans = 0;
    int WA_ans = 0;
    int TLE_ans = 0;
    int RE_ans = 0;
    for (int i = 0; i < N; i++) {
        string S; cin >> S;
        if (S == "AC") {
            AC_ans++;
        } else if(S == "WA") {
            WA_ans++;
        } else if (S == "TLE") {
            TLE_ans++;
        } else {
            RE_ans++;
        }
    }
    cout << "AC x " << AC_ans << endl;
    cout << "WA x " << WA_ans << endl;
    cout << "TLE x " << TLE_ans << endl;
    cout << "RE x " << RE_ans << endl;
}
