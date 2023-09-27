#include <iostream>
using namespace std;


int main(){
    int n;
    string cmd;
    while(cin >> n && n){
        int res = 0;
        bool left = false, right = false, st = 0;
        for(int x = 0; x < n; x++){
            cin >> cmd;
            if(cmd == "lu"){
                left = true;
            }else if(cmd == "ld"){
                left = false;
            }else if(cmd == "ru"){
                right = true;
            }else if(cmd == "rd"){
                right = false;
            }
            if(left == right){
                if(left != st){
                    st = left;
                    res += 1;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}