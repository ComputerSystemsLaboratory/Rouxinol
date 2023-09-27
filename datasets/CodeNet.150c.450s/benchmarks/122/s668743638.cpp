#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int k;
    string order;
    priority_queue<int> S;
    while(true){
        cin >> order;
        if(order == "end") break;
        if(order == "insert"){
            cin >> k;
            S.push(k);
        }
        if(order == "extract"){
            cout << S.top() << endl;
            S.pop();
        }
    }
    return 0;
}