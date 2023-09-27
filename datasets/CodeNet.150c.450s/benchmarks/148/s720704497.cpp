#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<time.h>
#include<vector>
#define ll long long
using namespace std;
map<string,int>mp;
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int n;
    cin>>n;
    mp["AC"] = 0;
    mp["WA"] = 0;
    mp["TLE"] = 0;
    mp["RE"] = 0;
    for(int i=0;i<n;++i){
        string t;
        cin>>t;
        mp[t]++;
    }
    cout<<"AC"<<' '<<'x'<<' '<<mp["AC"]<<endl;
    cout<<"WA"<<' '<<'x'<<' '<<mp["WA"]<<endl;
    cout<<"TLE"<<' '<<'x'<<' '<<mp["TLE"]<<endl;
    cout<<"RE"<<' '<<'x'<<' '<<mp["RE"]<<endl;
    return 0;
}
