#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,a,n) for(int i = (a);i < (n);i++)

bool lu,ru,ld,rd;
bool up,down;

void init(){
    lu = ru = false;
    ld = rd = true;

    up = false;
    down = true;
}

int go(string s){
    if(s == "lu"){
        lu = true;
        ld = false;
    }else if(s == "ru"){
        ru = true;
        rd = false;
    }else if(s == "ld"){
        ld = true;
        lu = false;
    }else if(s == "rd"){
        rd = true;
        ru = false;
    }

    //up
    if(!up && ru && lu){
        up = true;
        down = false;
        return 1;
    }

    //down
    if(!down && rd && ld){
        up = false;
        down = true;
        return 1;
    }

    return 0;
}

int main(){
    int n;
    string s;
    while(cin >> n,n){
        init();
        int ans = 0;
        rep(i,0,n){
            cin >> s;
            ans += go(s);
            // cout << s << ":" << ans << endl;
        }
        cout << ans << endl;
    }
}


