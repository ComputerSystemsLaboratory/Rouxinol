#include <iostream>
#include <queue>
using namespace std;

int main(){
    string str;
    int num;
    priority_queue<int> maxqu;
    while(true){
        cin >> str;
        if (str[2] == 'd') break;
        if (str[0] == 'i'){
            cin >> num;
            maxqu.push(num);
        } else {
            cout << maxqu.top() << endl;
            maxqu.pop();
        }
    }
}