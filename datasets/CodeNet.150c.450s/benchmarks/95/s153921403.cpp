#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0) break;
        string str;
        int left = 0; int right = 0;
        int cnt = 0;
        bool on_step = false;

        REP(i,n){
            cin >> str;
            if(str=="lu") left = 1;
            else if(str=="ru") right = 1;
            else if(str=="ld") left = 0;
            else if(str=="rd") right = 0;

            if(!on_step && left+right==2){
                cnt++;
                on_step=true;
            }else if(on_step && left+right==0){
                cnt++;
                on_step=false;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}