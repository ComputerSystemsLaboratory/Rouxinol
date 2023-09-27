#include <bits/stdc++.h>
#include<string>
using namespace std;

int main () {
    std::string s, p;
    int ans;
    cin >> s >> p;
    s = s + s;
    ans = s.find(p);
    if (ans == -1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}
