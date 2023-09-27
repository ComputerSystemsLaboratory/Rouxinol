#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
#define OUTPUT(a,b,s) cout << s << '\n'
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < b)
        OUTPUT(a,b,"a < b");
    else if (a > b)
        OUTPUT(a,b,"a > b");
    else
        OUTPUT(a,b,"a == b");
}