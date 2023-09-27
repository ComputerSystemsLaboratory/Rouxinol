#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
stack<int> st;
while(cin >> n) {
if(n != 0) st.push(n);
else if(n == 0) {
cout << st.top() << endl;
st.pop();
}
}
return 0;
}