#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    while(1){
        cin >> n;
        if (n==0) return 0;
        string tmp;
        int cnt=0,state=0; //1??????:????¶? 2??????:????¶?
        int ud = 0; //??????????????????????????????
        for(int i=0; i<n; i++) {
            cin >> tmp;
            if (tmp == "lu") {
                if (state == 0) state = 2;
                else if (state == 1) {
                    state = 3;
                    if (ud == 0) cnt++; ud=1;
                }
            } else if (tmp == "ru") {
                if (state == 0) state = 1;
                else if (state == 2) {
                    state = 3;
                    if (ud == 0) cnt++; ud=1;
                }
            } else if (tmp == "ld") {
                if (state == 3) state = 1;
                else if (state == 2) {
                    state = 0;
                    if (ud == 1) cnt++; ud=0;
                }
            } else if (tmp == "rd") {
                if (state == 3) state = 2;
                else if (state == 1) {
                    state = 0;
                    if (ud == 1) cnt++; ud=0;
                }
            }
        } 
        cout << cnt << endl;
    }
}