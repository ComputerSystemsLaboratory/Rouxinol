#include <bits/stdc++.h>
using namespace std;

int main(){
    // y = x^2
    int d, i, s;
    while(cin >> d){
        s = 0;
        for (i = 0; i < (600/d); ++i){
            s = s + (i * d) * (i * d) * d;
        }
        cout << s << endl;
    }
}
