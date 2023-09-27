#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<map>  
#include<set>
#include<iterator>
#include<list>
#include<utility>
#include<cstdlib>
#include<queue>
#include<stack>
#include<bitset>
//#include<bits/stdc++.h>

#define PI  2*acos(0.0)
#define pb push_back


using namespace std;
using ll = long long;
using lli = long long int;
using ld = long double;


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0), cout.tie(0);

string s;
ll n;
cin>>n;
ll wa_cnt=0,re_cnt=0,tle_cnt=0,ac_cnt=0;
while(n--)
{
	cin>>s;
	if(s=="AC")
	{
		ac_cnt++;
	}
	
	else if(s=="TLE")
	{
		tle_cnt++;
	}
	
	else if(s=="RE")
	{
		re_cnt++;
	}
	
	else
	{
		wa_cnt++;
	}
	
}

cout<<"AC x "<<ac_cnt<<"\n";
cout<<"WA x "<<wa_cnt<<"\n";
cout<<"TLE x "<<tle_cnt<<"\n";
cout<<"RE x "<<re_cnt<<"\n";

	
	
	return 0;
	
	
}