#include <iostream>
#define REP(i,n) for(inti=0;i<n;i++)
using namespace std;

int main() {
    int S;
    cin >> S;
    cout << S/3600 << ':'
        << S%3600/60 << ':'
        << S%60 << '\n';
}