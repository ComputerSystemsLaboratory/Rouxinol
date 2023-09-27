#include <cstdio>
#include <iostream>

using namespace std;

int all,ans;

void m(int d){
    ans += all / d;
    all = all % d;
}

int solve(int a){
    all = 1000 - a;
    ans = 0;
    m(500);
    m(100);
    m(50);
    m(10);
    m(5);
    m(1);
    return ans;
}

int main(){
    int a;
    while(true){
        cin >> a;
        if(!a){break;}
        cout << solve(a) << endl;
    }
}