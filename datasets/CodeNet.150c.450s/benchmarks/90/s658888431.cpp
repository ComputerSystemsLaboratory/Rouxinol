#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

//Zeller's conguence

int main()
{
    int a[101]={0};
    int n;
    while(cin>>n){
        a[n]++;
    }
    //cout<<"hoge"<<endl;
    int temp=0;
    rep(i,101) temp=max(temp,a[i]);
    vector<int> hoge;
    rep(i,101) if(temp==a[i]) hoge.push_back(i);
    SORT(hoge);
    rep(i,hoge.size()){
        cout<<hoge[i]<<endl;
    }
    return 0;
}