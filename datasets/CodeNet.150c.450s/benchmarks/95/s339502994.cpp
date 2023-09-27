#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n > 0){
        bool left = false , right = false, f = false;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            if(s == "lu") left = true;
            if(s == "ru") right = true;
            if(s == "ld") left = false;
            if(s == "rd") right = false;
            if(f == false && right == true && left == true){
                cnt++;
                f = true;
            }
            else if(f == true && right == false && left == false){
                cnt++;
                f = false;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}


