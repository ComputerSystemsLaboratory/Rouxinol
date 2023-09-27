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
    int person, winNum, percent;
    int vote[1005], sumMoney;
    while(cin >> person >> winNum >> percent, person || winNum || percent){
        percent = 100 - percent;
        sumMoney = 0;
        range(i, 1, person + 1){
            cin >> vote[i];
            sumMoney+= vote[i] * 100;
        }
        if(vote[winNum] != 0)
            cout << (sumMoney * percent / 100) / vote[winNum] << endl;
        else
            cout << 0 << endl;
    }
}