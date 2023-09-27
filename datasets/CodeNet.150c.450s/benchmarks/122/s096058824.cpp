

#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    priority_queue<int> Q;
    string str;
    int a;
    while (1)
    {
        cin >> str;
        if (str =="insert") { 
            cin >> a;
            Q.push(a);
        }
        else if (str=="extract") {
            cout << Q.top() << endl;
            Q.pop();
        }
        else {
            break;
        }
    }
    return 0;
}