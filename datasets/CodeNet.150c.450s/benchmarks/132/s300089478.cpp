#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int st[51];
int n,p;

bool isended(int arg){
    bool ret = true;
    for(int i=0;i<n;i++){
        if(i == arg) continue;
        if(st[i] != 0){
            ret = false;
            break;
        }
    }
    return ret;
}

int main(){
    while(cin >> n >> p){
        if((n|p) == 0) break;
        int turn = 0;

        memset(st, 0, sizeof(st));
        
        while(1){
            if(p > 0){
                p--;
                st[turn]++;
                if(p == 0 &&
                   isended(turn)){
                    break;
                }
            }else{
                p += st[turn];
                st[turn] = 0;
            }
            turn++;
            turn %= n;
        }
        cout << turn << endl;
    }
}