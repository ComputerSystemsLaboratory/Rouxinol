#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    string S;
    int a, b, c, d;
    a = b = c = d = 0;
    for (int i = 0; i < N; i++) {
        cin >> S;
        if (S == "AC") a++;
        if (S == "WA")b++;
        if (S == "TLE")c++;
        if (S == "RE")d++;
   }
    cout << "AC x "<< a<< endl;
    cout << "WA x "<< b << endl;
    cout << "TLE x "<< c << endl;
    cout << "RE x "<< d << endl;
}