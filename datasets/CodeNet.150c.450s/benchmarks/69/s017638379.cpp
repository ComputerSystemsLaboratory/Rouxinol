#include    <iostream>
#include    <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int att = 0; att < n; att++) {
        int balls[10];      // ボールのリスト
        stack<int> r, l;    // 筒の状態をプールするstack
        bool isOK = true;   // 分配可能フラグ
        
        for(auto b : balls) {
            cin >> b;
            
            if(!isOK) continue;
            if      (r.empty() || r.top() < b)  { r.push(b); }
            else if (l.empty() || l.top() < b)  { l.push(b); }
            else                                { isOK = !isOK; }
        }
        cout << (isOK ? "YES" : "NO") << endl;
    }
    
    return 0;
}
