#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    priority_queue<int> Q;
    int a;
    string hoge;
    while (cin >> hoge) {
        if (hoge == "insert") {
            cin >> a;
            Q.push(a);
        } else if (hoge == "extract") {
            cout << Q.top() << endl;
            Q.pop();
        } else {
            break;
        }
    }
}
