#include <algorithm>
#include <iostream>
#include <vector>
#include <string> 
#include <set>
typedef long long ll;
using namespace std;
int a, b, c, d;
int main() {
    ll n; cin >> n;
   
    while (n--) {
        string s; cin >> s;
        if (s == "AC")a++;
        else if (s == "WA")b++;
        else if (s == "TLE")c++;
        else d++;
        
    }
    cout << "AC" << " x " << a << endl;
    cout << "WA" << " x " << b << endl;
    cout << "TLE" << " x " << c << endl;
    cout << "RE" << " x " << d << endl;
    return 0;
}
