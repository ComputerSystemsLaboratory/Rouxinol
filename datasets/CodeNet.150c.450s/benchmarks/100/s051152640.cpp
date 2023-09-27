#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
const int N = 5;

long long int dfs(long long int n){
    if(n == 0) return 1;
    else return dfs(n - 1) * n;
}

int main(){
    long long int n;
    cin >>n;
    cout <<dfs(n) <<endl;
    return 0;
}