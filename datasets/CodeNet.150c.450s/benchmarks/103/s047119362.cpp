#include<bits/stdc++.h>

using namespace std;

int n,s;

int f(int deps,int cnt,int sum)
{
    if(deps == 10){
        if(cnt == n && sum == s)return 1;
        return 0;
    }
    return f(deps + 1,cnt + 1,sum + deps)+f(deps + 1,cnt,sum);
}

int main()
{
    while(1){
    cin >> n >> s;
    if(n == 0 && s == 0)break;
    printf("%d\n",f(0,0,0));
    }
    return 0;
}