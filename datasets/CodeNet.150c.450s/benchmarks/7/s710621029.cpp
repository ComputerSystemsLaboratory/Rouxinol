#include <iostream>
#include <queue>
using namespace std;

typedef long long ll;

int main(void)
{
    priority_queue<ll> pque;
    ll input;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        pque.push(input);
    }

    for (int i = 0; i < 3; i++) {
        cout << pque.top() << endl;
        pque.pop();
    }

    return 0;
}