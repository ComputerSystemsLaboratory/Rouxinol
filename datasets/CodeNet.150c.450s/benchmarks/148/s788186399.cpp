#include <bits/stdc++.h>

using namespace std;


int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "AC")
            c1 += 1;
        if(s == "WA")
            c2 += 1;
        if(s == "TLE")
            c3 += 1;
        if(s == "RE")
            c4 += 1;

    }
    cout << "AC " << "x " << c1 << "\n" << "WA " << "x " << c2 << "\n"
         << "TLE " << "x " << c3 << "\n" << "RE " << "x " << c4 << "\n";

}