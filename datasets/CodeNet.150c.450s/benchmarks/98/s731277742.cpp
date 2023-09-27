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
    int n, m;
    while(cin >> n >> m, m){
        int inp, tsum = 0, hsum = 0;
        int ansA = -1, ansB = -1;
        vector<int> taro;
        vector<int> hanako;
        rep(i, n){
            cin >> inp;
            tsum+= inp;
            taro.push_back(inp);
        }
        rep(i, m){
            cin >> inp;
            hsum+= inp;
            hanako.push_back(inp);
        }
        sort(taro.begin(), taro.end());
        sort(hanako.begin(), hanako.end());
        if((tsum + hsum) % 2 == 1){
            cout << -1 << endl;
            continue;
        }
        bool flag = false;
        rep(i, taro.size()){
            if(flag) break;
            rep(j, hanako.size()){
                if(flag) break;
                if(tsum - taro[i] + hanako[j] == hsum - hanako[j] + taro[i]){
                    ansA = i;
                    ansB = j;
                    flag = true;
                }
            }
        }
            if(ansA != -1)
                cout << taro[ansA] << ' ' << hanako[ansB] << endl;
            else
                cout << -1 << endl;
    }
}