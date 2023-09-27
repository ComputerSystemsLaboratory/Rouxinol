#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    priority_queue<int> Q;
    string op;
    while(true){
        cin >> op;
        if(op=="insert"){
            int val;
            cin >> val;
            Q.push(val);
        }else if(op=="extract"){
            int val;
            val=Q.top();Q.pop();
            cout << val << endl;
        }else if(op=="end"){
            break;
        }
    }
}

