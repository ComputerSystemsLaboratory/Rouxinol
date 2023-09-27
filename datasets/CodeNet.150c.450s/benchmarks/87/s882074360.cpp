#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000
using namespace std;
int table[10][10];
int cnt,check,flag,tmp_flag;
queue<pair<int,int> > que;
int search(int y,int x){
    que.push(pair<int,int>(y,x));
    cnt++;
    x++;
    if(x < 5){
        if(table[y][x] == check) search(y,x);
    }
    if(cnt >= 3) {
        tmp_flag = true;
        return cnt;
    }
    else return 0;
}
int main(){
    int n;
    while(cin >> n,n){
        rep(i,n){
            rep(j,5){
                cin >> table[i][j];
            }
        }
        int point = 0;
        flag = true;
        while(flag){
            flag = false;
            rep(i,n){
                rep(j,5) {
                    if(table[i][j] == 0) continue;
                    tmp_flag = false;
                    cnt = 0;
                    check = table[i][j];
                    point += check*search(i,j);
                    if(tmp_flag){
                        flag = true;
                        while(!que.empty()){
                            pair<int,int> tmp = que.front();
                            que.pop();
                            table[tmp.first][tmp.second] = 0;
                        }
                    }
                    else while(!que.empty()) que.pop();
                }
            }
            if(!flag) continue;
            for(int i=n-1; i>=1; i--){
                for(int j=4; j>=0; j--){
                    if(table[i][j] != 0) continue;
                    for(int k=i; k>=0; k--){
                        if(table[k][j] == 0) continue;
                        swap(table[i][j],table[k][j]);
                        break;
                    }
                }
            }
        }
        cout << point << endl;
    }
    return 0;
}
