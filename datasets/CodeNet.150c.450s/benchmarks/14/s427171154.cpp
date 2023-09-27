#include    <iostream>
#include    <string>
#include    <queue>
#include    <vector>
#include    <functional>

using namespace std;

int main() {
    int n;
    priority_queue< int, vector<int>, greater<int> > nabeatsu;

    cin >> n;
    // 出力をよく見ると、3の倍数と3の数字が含まれる数がリストとして出力されている
    // 但し、いきなりコーディングする際は最初の出力にも1文字分のスペースがついている点に注意
    
    for(int i = 1; i <= n; i++) {
        // 3の倍数かを判定
        if(i % 3 == 0)                      nabeatsu.push(i);
        // 3のつく数字かを判定
        else if(to_string(i).find('3') != -1) nabeatsu.push(i);
    }
    while(!nabeatsu.empty()) {
        cout << ' ' << nabeatsu.top();
        nabeatsu.pop();
    }
    cout << endl;

    return 0;
}
