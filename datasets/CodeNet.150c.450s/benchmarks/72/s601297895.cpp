#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> a;
    char c;
    c=getchar();
    while(c != '\n'){
        a.push_back(c);
        c=getchar();
    }
    string result;
    for (int i = 0; i < a.size() ; ++i) {
        if(a[i]>='a' && a[i]<='z') {
            result += a[i] - 32;
        }
        else if(a[i]>='A' && a[i]<= 'Z') {
            result += a[i] + 32;
        }
        else
            result+=a[i];
    }
    cout << result << endl;
    return 0;
}
