#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;

    int a;

    cin >> a;
    st.push(a);

    while (cin >> a) {
        if (a) st.push(a);
        else { cout << st.top() << endl; st.pop(); }
    }
}