#include<bits/stdc++.h>

using namespace std;

int main()
{
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        for(int i = a; i <= b; i++)
                if(!(c%i)) cnt++;
        cout << cnt << endl;
        return 0;
}