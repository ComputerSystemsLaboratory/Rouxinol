#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    bool flag = false;
    cin >> a >> b >> c;
    if(a < b && b < c) flag = true;
    printf(flag?"Yes\n":"No\n");
}

