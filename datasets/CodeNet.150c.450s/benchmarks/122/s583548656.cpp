#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> data;
    string s;
    while (cin >> s && s != "end")
    {
        if (s == "insert")
        {
            int n;
            cin >> n;
            data.push(n);
        }
        else
        {
            cout << data.top() << endl;
            data.pop();
        }
    }
    return 0;
}

