#include<iostream>
#include<vector>
#include<algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

int game(int num, int pebbles){
    int cand[num];
    REP(i,num) cand[i] = 0;

    int cnt = 0, p = pebbles, ans;
    while(true){
        int turn = cnt % num;
        cnt++;
        if(p == 0){
            if(cand[turn] == 0) continue;
            p += cand[turn];
            cand[turn] = 0;
        }else{
            p--;
            cand[turn]++;
            if(cand[turn] == pebbles){
                ans = turn;
                break;
            }
        }
    }
    return ans;
}

int main(){
    int n, p;
    while(cin >> n >> p){
        if(n == 0 && p == 0) break;
        int ans = game(n, p);
        cout << ans << endl;
    }
    return 0;
}