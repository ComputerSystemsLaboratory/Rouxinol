#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    priority_queue<int> Q;
    string s;
    int n;
    while(cin >> s && s!="end"){
        if(s=="insert"){
            cin >> n;
            Q.push(n);
        }
        else{
            cout << Q.top() << endl;
            Q.pop();
        }
    }

}