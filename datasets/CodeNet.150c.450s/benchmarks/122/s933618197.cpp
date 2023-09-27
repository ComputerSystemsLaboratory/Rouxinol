#include <string>
#include <stack>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <utility>
using namespace std; 
int main()
{
    string cmd;
    priority_queue<int> Q;
    int a;
while (cin >> cmd && cmd != "end")
{
    if (cmd == "insert")
    {
        cin>>a;
        Q.push(a);
    }
    else if (cmd == "extract")
    {
        cout<<Q.top()<<endl;
        Q.pop();
    }
    
}
}
