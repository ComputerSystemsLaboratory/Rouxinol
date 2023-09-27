#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(void) {
    stack<int> st;
    int i;
    while (cin >> i) {
        if (i != 0) {
            st.push(i);
        } else {
            cout << st.top() << endl;
            st.pop();
        }
    }
    return 0;
}