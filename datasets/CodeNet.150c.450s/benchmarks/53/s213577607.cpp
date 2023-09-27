#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void fact(int n, map<int,int>& Map){
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            Map[i]++;
            n /= i;
        }
    }
    if(n == 1)return;
    Map[n]++;
}




int main()
{
    int n;
    cin >> n;
    cout << n << ": ";
    map<int,int> mp;
    fact(n, mp);
    vector<int> ans;
    for(auto i : mp){
        for(int j = 0; j < i.second;j++)ans.push_back(i.first);
    }
    for(int i = 0; i < (int)ans.size(); i++)cout << ans[i] << (i == (int)ans.size() - 1 ? '\n' : ' ' ); 
}
