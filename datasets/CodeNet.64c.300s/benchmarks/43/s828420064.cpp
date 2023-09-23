#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0,b = {0},n;
    for(int i = 0;i < 4;i++){
        cin >> n;
        a += n;
    }
    for(int i = 0;i < 4;i++){
        cin >> n;
        b += n;
    }
    if(a < b)cout << b << endl;
    else cout << a << endl;
}