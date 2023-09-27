#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse_iterator<std::string::iterator> r = s.rbegin();
    string rev(r, s.rend());
    cout << rev << '\n';
}