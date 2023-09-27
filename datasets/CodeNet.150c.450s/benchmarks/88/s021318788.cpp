#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include<algorithm>
#include<complex>
#include<cstdlib>
#include<cctype>

#define REP(i,n) for(int i = 0;i < (n);i++)
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cout << v[i] << ' ';cout << endl << endl;}
#define SHOW2d(v,i,j) {for(int a = 0;a < i;a++){for(int b = 0;b < j;b++)cout << v[a][b] << ' ';cout << endl;}cout << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> iiv;
typedef vector<string> sv;

bool combox(pair<int,int> a,pair<int,int> b)
{
	int ta = a.FI * a.FI + a.SE * a.SE;
	int tb = b.FI * b.FI + b.SE * b.SE;
	
	if(ta > tb)
	{
		return true;
	}
	else if(ta == tb)
	{
		if(a.FI > b.FI)
			return true;
		else
			return false;
	}
	else
		return false;
	
}
	
	
int main()
{
	int h,w;
	while(cin>>h>>w,h|w)
	{
		  pair<int,int> p = MP(h,w);
		  
		  pair<int,int> ans = MP(10*h,10*w);
		  
		  bool flag = true;
		  for(int i = 3;i < h+w+50;i++)
		  {
			  flag = false;
			  for(int j = 1;j < i-j;j++)
			  {
				  pair<int,int> tmp =MP(j,i-j);
				  if(combox(tmp,p)&&combox(ans,tmp))ans = tmp;
			  }
		  }
		  
		  cout << ans.FI << ' ' << ans.SE << endl;
		  
	}
	
	return 0;
}