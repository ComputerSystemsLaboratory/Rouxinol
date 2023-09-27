#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    int n;

    while(true) {
        cin >> n;
        if(n == 0)  break;

        string result;
        map<char, char> convert;

        for(int i = 0; i < n; i++) {
            char a, b;
            cin >> a >> b;
            convert[a] = b;
        }

        cin >> n;

        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if (convert.find(c) != convert.end()) {
                cout << convert[c];
            } else {
                cout << c;
            }
        }
        cout << endl;
         
    }
    return 0;

}