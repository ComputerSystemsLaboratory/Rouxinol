#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        int x = 0;
        for (int j = 0; j < 2; j++){
            cin >> s;
            int p = (int)s.size();
            for (int i = 0; i < p; i++){
                if (s[i] == 'm'){
                    if (i == 0) x += 1000;
                    else x += (s[i-1] - '0') * 1000;
                }
                else if (s[i] == 'c'){
                    if (i == 0 || s[i-1] == 'm') x += 100;
                    else x += (s[i-1] - '0') * 100;
                }
                else if (s[i] == 'x'){
                    if (i == 0 || s[i-1] == 'c' || s[i-1] == 'm') x += 10;
                    else x += (s[i-1] - '0') * 10;
                }
                else if (s[i] == 'i'){
                    if (i == 0 || s[i-1] == 'x' || s[i-1] == 'c' || s[i-1] == 'm') x++;
                    else x += (s[i-1] - '0');
                }
            }
        }
        if (x > 1999){
            cout << x / 1000 << 'm';
            x -= 1000 * (x / 1000);
        }
        if (x > 999){
            cout << 'm';
            x -= 1000;
        }
        if (x > 199){
            cout << x / 100 << 'c';
            x -= 100 * (x / 100);
        }
        if (x > 99){
            cout << 'c';
            x -= 100;
        }
        if (x > 19){
            cout << x / 10 << 'x';
            x -= 10 * (x / 10);
        }
        if (x > 9){
            cout << 'x';
            x -= 10;
        }
        if (x > 1){
            cout << x << 'i';
            x = 0;
        }
        if (x > 0){
            cout << 'i';
            x = 0;
        }
        cout << endl;
    }
}
