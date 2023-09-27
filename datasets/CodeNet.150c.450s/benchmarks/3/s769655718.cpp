//============================================================================
// Author      : JCH
// Copyright   :
// Description : Contest ACM Div1 Div2
//============================================================================

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string s, op;
 char ss[1000];
 int q, a, b;

 int main() {

 cin >> s >> q;

 int size = s.size();

 for (int i = 0; i < size; ++i)
 ss[i] = s[i];

 while (q--) {

 cin >> op;

 if (op == "replace") {

 cin >> a >> b >> op;

 for (int i = a, j = 0; i <= b; ++i, ++j)
 ss[i] = op[j];

 } else if (op == "reverse") {

 cin >> a >> b;

 for (int i = a, j = b; i < j; ++i, --j)
 swap(ss[i], ss[j]);

 } else {

 cin >> a >> b;

 for (int i = a; i <= b; ++i)
 cout << ss[i];

 cout << endl;
 }

 }

 return 0;
 }
