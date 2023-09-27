#include"bits/stdc++.h"
#include<cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;

int main(){
	int n;
	int ac=0;
	int wa=0;
	int tle=0;
	int re=0;
	cin>>n;
	rep(i,n){
		string s;
		cin>>s;
		if(s=="AC")ac++;
		else if(s=="WA")wa++;
		else if(s=="TLE")tle++;
		else if(s=="RE")re++;
	}

	printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n",ac,wa,tle,re);

	return 0;
}