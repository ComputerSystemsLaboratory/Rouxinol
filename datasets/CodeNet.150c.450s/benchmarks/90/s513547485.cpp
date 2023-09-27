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
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
int a[101];
for(int i=0;i<101;i++){a[i]=0;}
int n;
while(cin>>n){
a[n]++;
}
int ans=0;
for(int i=1;i<101;i++){
ans=max(ans,a[i]);
}
for(int i=1;i<101;i++){
if(a[i]==ans){cout<<i<<endl;}
}
	return 0;
}
