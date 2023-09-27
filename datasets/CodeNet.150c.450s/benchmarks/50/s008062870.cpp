#include<cstdio>
#include<cctype>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int price,change;
    int money[6]={500, 100, 50, 10, 5, 1};
    while(1){
    int cnt=0;
    cin >> price;
    if(price == 0)break;
    change = 1000 - price;
    for(int i = 0;i < 6;i++){
        while(1){
            if(change >= money[i]){
                change -= money[i];
                cnt++;
            }
            else break;
        }
    }
    cout << cnt << endl;
    }
    return 0;
}