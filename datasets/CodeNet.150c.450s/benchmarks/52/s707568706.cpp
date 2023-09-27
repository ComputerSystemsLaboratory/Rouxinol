#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> stop;
    int come;
    while(cin >> come){
        if(come!=0) stop.push(come);
        else{
            cout << stop.top() << endl;
            stop.pop();
        }
    }
    return 0;
}