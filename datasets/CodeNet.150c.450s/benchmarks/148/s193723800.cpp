#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> vec(N);
    int C0 = 0;
    int C1 = 0;
    int C2 = 0;
    int C3 = 0;
    for(int i = 0; i < N; i++){
        cin >> vec.at(i);
        if (vec.at(i) == "AC")
            C0++;
        else if (vec.at(i) == "WA")
            C1++;
        else if (vec.at(i) == "TLE")
            C2++;
        else if (vec.at(i) == "RE")
            C3++;
    }
    cout << "AC x " << C0 << endl;
    cout << "WA x " << C1 << endl;
    cout << "TLE x " << C2 << endl;
    cout << "RE x " << C3 << endl;
}