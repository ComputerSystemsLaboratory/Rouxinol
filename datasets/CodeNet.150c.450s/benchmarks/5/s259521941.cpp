#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    
    stack<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.push(a);
    }
    
    for (int i = 0; i < n - 1; i++) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << s.top() << endl;
    
    return 0;
}
