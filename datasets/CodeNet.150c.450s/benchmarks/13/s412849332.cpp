#include <bits/stdc++.h> 
using namespace std;
int main()
{
string s, p;
cin >> s >> p;
s += s;
cout << (s.find(p) == string::npos ? "No\n" : "Yes\n");
}