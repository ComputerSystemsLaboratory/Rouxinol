#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<queue>
#include <climits>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1e9 + 7;
const long long INF = 1LL << 60;


int date[12][31];
string day[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int main() 
{
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 31; j++){
            date[i][j] = 0;
        }
    }
    for(int i = 0; i < 12; i++){
        if(i == 3 || i == 5 || i == 8 || i == 10){
            for(int j = 0; j < 30; j++){
                date[i][j] = 1;
            }
        }else if(i == 1){
            for(int j = 0; j < 29; j++){
                date[i][j] = 1;
            }
        }else{
            for(int j = 0; j < 31; j++){
                date[i][j] = 1;
            }
        }
    }
    while(true){
        int cnt = 0;
        int m,d;
        cin >> m >> d;
        if(m==0 && d == 0) break;
        m--; d--;
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 31; j++){
                if((i < m || (i == m && j <= d)) && date[i][j] == 1){
                    cnt++;
                }
            }
        }
        cnt += 2;
        cout << day[cnt%7] << endl;
    }
}
