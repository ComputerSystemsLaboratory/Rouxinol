#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int num;
    stack<int> rail;

    while (cin >> num) {
        if (num > 0) {
            rail.push(num);
        }
        else {
            cout << rail.top() << "\n";
            rail.pop();
        }
    }

    return 0;
}