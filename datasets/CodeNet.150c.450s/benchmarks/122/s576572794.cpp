#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{   
    string s;
    int num;
    priority_queue<int> Q;

    while (cin >> s && s != "end") {
        
        if (s == "insert") {
            cin >> num;
            Q.push(num);
        }

        else if (s == "extract") {
            cout << Q.top() << endl;
            Q.pop();
        }
    }
}
