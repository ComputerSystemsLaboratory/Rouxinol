#include<iostream>

using namespace std;
int n, s, ans;

void solve(int cnt, int num, int sum){
    if(n==cnt&&s==sum){
        ans++;
        return;
    }else if(cnt>n||num>9){
        return;
    }

    solve(cnt+1, num+1, sum+num);
    solve(cnt, num+1, sum);
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