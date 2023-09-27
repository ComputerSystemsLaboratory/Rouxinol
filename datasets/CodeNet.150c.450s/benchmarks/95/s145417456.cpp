#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int leg[2] = {0};
        int ans = 0;
        bool ground = true;
        rep(i, n){
            string inp;
            cin >> inp;
            if(inp == "lu"){
                leg[0]++;
            }else if(inp == "ru"){
                leg[1]++;
            }else if(inp == "ld"){
                leg[0]--;
            }else if(inp == "rd"){
                leg[1]--;
            }
            if(ground == true && leg[0] == 1 && leg[1] == 1){
                ans++;
                ground = false;
            }else if(ground == false && leg[0] == 0 && leg[1] == 0){
                ans++;
                ground = true;
            }
        }
        cout << ans << endl;
    }
}