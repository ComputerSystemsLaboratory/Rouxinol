#include <iostream>
#include <string>
#include <cstdlib>
#include <queue>
using namespace std;


int main() {
    queue<char> q;
    string s;
    int i, j, h, num;

    cin >> s;

    while(s!="-"){

    for(i=0;i<s.size();i++){
        q.push(s[i]);
    }

    cin >> num;

    for(i=0;i<num;i++){
        cin >> h;
        for(j=0;j<h;j++){
            q.push(q.front());
            q.pop();
        }
    }

    for(i=0;i<s.size();i++){
        cout << q.front();
        q.pop();
    }
    cout << endl;

    cin >> s;
    }

    return 0;
}
