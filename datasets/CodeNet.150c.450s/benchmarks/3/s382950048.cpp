#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string op;
        int b, e;
        cin >> op;
        cin >> b >> e;
        if(op == "print"){
            cout << s.substr(b, e-b+1) << endl;
        }else{
            string x, y, z;
            x = s.substr(0, b);
            z = s.substr(e+1, s.size()-(e+1));
            if(op == "replace"){
                string r;
                cin >> y;
            }else{
                y = s.substr(b, e-b+1);
                reverse(y.begin(), y.end());
            }
            s = x + y + z;
        }
    } 
}
