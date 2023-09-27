#include <bits/stdc++.h>
#include<iostream>
#include <stdio.h>
#define f(i,a,b) for(int i=a; i<b; ++i)
#define f2(j,a,b) for(int j=a; j<b; ++j)
#define F first
#define S second
#define pi 3.1415926536
#define Faast ios_base::sync_with_stdio(0);       cin.tie(0);      cout.tie(0);
#define SIZE 10
#define IN freopen("records.in","r",stdin);
const int MOD = 1e9 + 7;
const int MAX_VAL=1e6+2;
const int INF = 0x3f3f3f3f;
typedef long long ll;
using namespace std;

void file()
{
    #ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  //freopen("out.txt", "w", stdout);
    #else
  // online submission
    #endif
}

int main()
{
     int n,a[6]{}; cin>>n;
     while(n--)
     {
       string s; cin>>s;
       if(s=="AC") a[0]++;
       else if(s=="WA") a[1]++;
       else if(s=="TLE") a[2]++;
       else a[3]++;
     }
     cout<<"AC x "<<a[0]<<endl;
     cout<<"WA x "<<a[1]<<endl;
     cout<<"TLE x "<<a[2]<<endl;
     cout<<"RE x "<<a[3]<<endl;
      return 0;
}