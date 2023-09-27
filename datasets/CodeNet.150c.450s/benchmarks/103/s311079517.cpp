#include<iostream>

using namespace std;
int n, s, ans;
void solve(int v, int sum, int num){
    if(sum==s&&num==n){
        ans++;
        return;
    }
    if(v>=10||num>=n) return;

    solve(v+1, sum+v, num+1);
    solve(v+1, sum, num);
}


int main(){

    while(1){
        cin>> n>> s;
        if(n==0&&s==0) break;
        ans=0;
        solve(0, 0, 0);
        cout<< ans<< endl;
    }

    return 0;
}