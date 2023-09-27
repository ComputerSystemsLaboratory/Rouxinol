#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int ll;
ll Dp[50];
int main()
{
Dp[0]=1;
Dp[1]=1;
for(int i=2;i<50;i++)Dp[i]=Dp[i-1]+Dp[i-2];
int N;
cin >> N;
cout << Dp[N] << "\n";
 
return 0;
}