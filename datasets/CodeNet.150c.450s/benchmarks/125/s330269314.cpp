#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector<vector<int>>v;
vector<int>atime,btime;

int n;
int nowtime = 1;

void func(int i)
{
    if(atime[i] == 0) 
    {
        atime[i] = nowtime;
        nowtime++;
    }
    else return;
    for(auto x:v[i]) func(x);
    btime[i] = nowtime;
    nowtime++;
}

int main()
{
    int n;
    cin >> n;
    v.resize(n);
    atime.resize(n);
    btime.resize(n);
    for(int i = 0; i < n; i++)
    {
        atime[i]=0;
        btime[i]=0;
        int u,k;
        cin >> u >> k;
        for(int j = 0; j < k; j++)
        {
            int p;
            cin >> p;
            p--;
            v[i].push_back(p);
        }
    }
    for(int i = 0; i < n; i++) func(i);
    for(int i = 0; i < n; i++) cout << i+1 << " " << atime[i] << " " << btime[i] << endl; 
    
}

