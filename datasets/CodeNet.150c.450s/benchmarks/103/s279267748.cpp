#include<bits/stdc++.h>

using namespace std;

int n,s;

int F(int deps,int cnt,int sum){
    if(deps == 10){
        if(cnt == n && sum == s)return 1;
        return 0;
    }
    return F(deps + 1,cnt + 1,sum + deps) + F(deps + 1,cnt,sum);
}

int main()
{
    while(1){
        cin >> n >> s;
        if(n == 0 && s == 0)break;
        cout << F(0,0,0) << endl;
    }

}