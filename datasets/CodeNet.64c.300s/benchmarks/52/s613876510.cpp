#include<bits/stdc++.h>

using namespace std;

int n,s;
int mem[100][100][100];
int f(int deps,int cnt,int sum)
{
    if(mem[deps][cnt][sum])return mem[deps][cnt][sum];
    if(cnt == n && sum == s)return 1;
    if(deps == 10) return 0;
    return mem[deps][cnt][sum]=f(deps + 1,cnt + 1,sum + deps)+f(deps + 1,cnt,sum);
}

int main()
{
    while(1){
    memset(mem,0,sizeof(mem));
    cin >> n >> s;
    if(n == 0 && s == 0)break;
    printf("%d\n",f(0,0,0));
    }
    return 0;
}