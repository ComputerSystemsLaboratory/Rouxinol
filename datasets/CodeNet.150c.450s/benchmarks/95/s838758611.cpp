#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        string s[102];
        int ans = 0;
        bool y = true;
        bool ly = true;
        bool ry = true;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(s[i] == "lu" || s[i] == "ld") ly = !ly;
            else ry = !ry;
            if(ly == ry && y != ly){
                ans++;
                y = !y;
            }
        }
        cout << ans << endl;
    }
}

