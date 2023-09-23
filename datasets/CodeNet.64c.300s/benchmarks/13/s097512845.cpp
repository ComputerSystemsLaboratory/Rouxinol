#include <bits/stdc++.h>
using namespace std;
long long dp[50];
long long fib(int n){
if (n<=1) return 1;
if (dp[n]) return dp[n];
return dp[n]=fib(n-1)+fib(n-2);
}
int main(){
int n; cin>>n; cout<<fib(n)<<endl;
}
