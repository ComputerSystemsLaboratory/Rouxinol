#include <iostream>
using namespace std;

int n, s, ans;

void dfs(int num, int sum, int count){
    if (sum == s && count == 0){
        ans++;
        return;
    }

    if (count == 0 || num == 10) return;

    dfs(num+1, sum+num, count-1);
    dfs(num+1, sum, count);
}

int main(int argc, char const *argv[]){
    while (cin>>n>>s, n||s){
        ans = 0;
        dfs(0, 0, n);
        cout<<ans<<endl;
    }
    
    return 0;
}