#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

int a, b;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;

    if(a < b)
        cout << "a < b" << endl;
    else if(a > b)
        cout << "a > b" << endl;
    else
        cout << "a == b" << endl;
}

