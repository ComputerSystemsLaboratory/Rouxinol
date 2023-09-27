#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i=0; i<N; i++) {
        cin >> S.at(i);
    }

    int AC = 0;
    int WA = 0;
    int TLE = 0;
    int RE = 0;
    for (int i=0; i<N; i++) {
        if (S.at(i) == "AC") {
            AC++;
        }
        else if (S.at(i) == "WA") {
            WA++;
        }
        else if (S.at(i) == "TLE") {
            TLE++;
        }
        else if (S.at(i) == "RE") {
            RE++;
        }
    }
    cout << "AC" << " " << "x" << " " << AC << endl;
    cout << "WA" << " " << "x" << " " << WA << endl;
    cout << "TLE" << " " << "x" << " " << TLE << endl;
    cout << "RE" << " " << "x" << " " << RE << endl;
}