#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> count;
    for (int i = 0; i < n; i++)  {
        string tmp;
        cin >> tmp;
        count[tmp]++;
    }
    printf("AC x %d\n", count["AC"]);
    printf("WA x %d\n", count["WA"]);
    printf("TLE x %d\n", count["TLE"]);
    printf("RE x %d\n", count["RE"]);
}