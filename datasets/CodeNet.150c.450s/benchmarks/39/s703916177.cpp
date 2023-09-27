#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    getline(cin, s);
    // cout << s << "\n";
    int x = atoi(s.substr(0).c_str());
    int y = atoi(s.substr(2).c_str());

    cout << x * y << " " << (x + y) * 2 << "\n";
    return 0;
}