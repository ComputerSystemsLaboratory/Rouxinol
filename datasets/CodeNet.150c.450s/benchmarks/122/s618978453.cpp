#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
double pi = 3.141592653589793;
ll mod = 1000000007;

int main() {
    priority_queue<int> Q;
    string word;
    while (true) {
        cin >> word;
        if (word == "insert") {
            int i;
            cin >> i;
            Q.push(i);
        } else if (word == "extract") {
            cout << Q.top() << endl;
            Q.pop();
        } else {
            break;
        }
    }
}

