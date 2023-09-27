#include <iostream>

using namespace std;

int cnt;
int dp[100][100];

void rec(int left){
    if (left < 0){
        return;
    }
    if (left == 0){
        cnt++;
        return;
    }

    rec(left-1);
    rec(left-2);
    rec(left-3);

}

int main(int argc, char const *argv[]){
    int n;

    while (cin>>n, n){
        cnt = 0;
        int ans = 0;
        rec(n);
        ans = cnt / 3650;
        cout<<ans+1<<endl;       
    }

    return 0;
}