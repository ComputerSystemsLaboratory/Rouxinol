#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define roop(a,t) for(int a=0;a<t;a++) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
int n,m;
while(true){
cin>>n>>m;
if(n==0&&m==0){break;}
int ans=-2147483646;
int sum[100001];
for(int i=0;i<n;i++)
{
cin>>sum[i];
if(i!=0){sum[i]+=sum[i-1];}
if(i==m-1){ans=max(ans,sum[i]);}
else if(i>m-1){ans=max(ans,sum[i]-sum[i-m]);}
}
cout<<ans<<endl;
/////////////
}
///////////
    return 0;
}
