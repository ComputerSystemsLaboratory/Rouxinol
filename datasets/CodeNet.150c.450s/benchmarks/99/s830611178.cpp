#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;



int to(char a[]){
	int ans =0;
	int b =1;
	
	REP(i,sizeof(a))
			{
				if(a[i]=='m'){	ans += b*1000;	b=1;}
				else if(a[i]=='c'){	ans += b*100;	b=1;}
				else if(a[i]=='x'){	ans += b*10;	b=1;}
				else if(a[i]=='i'){	ans += b*1;	b=1;}
				else if(a[i]=='2'){	b=2;}
				else if(a[i]=='3'){	b=3;}
				else if(a[i]=='4'){	b=4;}
				else if(a[i]=='5'){	b=5;}
				else if(a[i]=='6'){	b=6;}
				else if(a[i]=='7'){	b=7;}
				else if(a[i]=='8'){	b=8;}
				else if(a[i]=='9'){	b=9;}}
	return ans;
}

void from(int a)
{
	if(a/1000 == 1 ){	cout << 'm'	;	}
	else if(a/1000 > 1){	cout << a/1000 << 'm'	;}
	a %= 1000;
	
	if(a/100 == 1 ){	cout << 'c'	;	}
	else if(a/100 > 1){	cout << a/100 << 'c'	;}
	a %= 100;
	
	if(a/10 == 1 ){	cout << 'x'	;	}
	else if(a/10 > 1){	cout << a/10 << 'x'	;}
	a %= 10;
	
	if(a/1 == 1 ){	cout << 'i'	;	}
	else if(a/1 > 1){	cout << a/1 << 'i'	;}
	a %= 1;
	
	cout << endl;
}

int main() 
{
	int n;
	cin >> n;
	REP(i,n)
	{
	char a[9]={};
	char b[9]={};
	cin >> a >> b;
	from(to(a)+to(b));
		
	}
	return 0 ;
}