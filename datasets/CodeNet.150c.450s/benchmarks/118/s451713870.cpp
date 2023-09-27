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
    while(cin >> n){
        rep(i, n){
            int year, month, day, days = 0;
            cin >> year >> month >> day;
            while(++days){
                day++;
                if(year % 3 == 0 && day == 21){
                    month++; day = 1;
                }else if(year % 3 != 0 && month % 2 == 1 && day == 21){
                    month++; day = 1;
                }else if(year % 3 != 0 && month % 2 == 0 && day == 20){
                    month++; day = 1;
                }
                if(month == 11){
                    month = 1; year++;
                }
                if(year == 1000) break;
            }
            cout << days << endl;
        }
    }
}