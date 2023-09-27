#include <bits/stdc++.h>


using namespace std;
using ll = long long;

unordered_map<string, int> mp;
void print(string st) {
    cout << st << " "
         << "x"
         << " " << mp[st] << "\n";
}
int main() {
    int n;
    cin >> n;
    string st;
    for(int i = 0; i < n; i++) {
        cin >> st;
        mp[st]++;
    }
    print("AC");
    print("WA");
    print("TLE");
    print("RE");



    return 0;
}

