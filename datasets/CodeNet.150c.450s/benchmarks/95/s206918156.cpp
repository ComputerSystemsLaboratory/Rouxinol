#include <iostream>
#include <string>
using namespace std;

int main(){
    while(true){
        int n;
        string str;
        int l=0, r=0;
        int before=0;
        int cnt=0;
        cin >> n;
        if(!n) break;
        for(int i=0;i<n;++i){
            cin >> str;
            if(str == "lu") l = 1;
            else if(str == "ru") r = 1;
            else if(str == "ld") l = 0;
            else if(str == "rd") r = 0;
            if(l == 1 && r == 1 && before == 0){
                before = 1;
                ++cnt;
            }else if(l == 0 && r == 0 && before == 1){
                before = 0;
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}