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
    int stone;
    while(cin >> stone, stone){
        int map[24][24] = {0};
        int x, y;
        x = y = 10;
        rep(i, stone){
            int a, b;
            cin >> a >> b;
            map[a][b] = 1;
        }
        int order;
        cin >> order;
        rep(i, order){
            int distance;
            char direction;
            cin >> direction >> distance;
            rep(j, distance){
                if(direction == 'N'){
                    y++;
                }else if(direction == 'E'){
                    x++;
                }else if(direction == 'S'){
                    y--;
                }else{
                    x--;
                }
                stone-= map[x][y];
                map[x][y] = 0;
            }
        }
        if(!stone) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}