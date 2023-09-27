#include <stack>
#include <iostream>

using namespace std;

int main(){
    int num;
    stack <int> s;
    while(1){
        cin >> num;
        if(!num){
            if (s.empty()) break;
            cout << s.top() <<endl;
            s.pop();
        }
        else s.push(num);
    }
    return 0;
}