#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double money = 100;
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        money *= 1.05;
        money = ceil(money);
    }
    cout << (int)(money*1000) << endl;
}