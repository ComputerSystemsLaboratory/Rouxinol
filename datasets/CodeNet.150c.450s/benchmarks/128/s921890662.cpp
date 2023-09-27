#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    getline(cin, str);
    for(int i=str.length()-1; i>=0; --i) {
        cout.put(str[i]);
    }
    cout.put('\n');
    return 0;
}

