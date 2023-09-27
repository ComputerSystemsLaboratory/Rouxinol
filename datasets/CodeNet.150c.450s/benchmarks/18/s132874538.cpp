#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0,a = 100000, e = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        a = a + a * 0.05;
        e = a % 1000;
        if(e > 0)a = a + 1000 - e;
    }
    cout << a << endl;

    return 0;
}