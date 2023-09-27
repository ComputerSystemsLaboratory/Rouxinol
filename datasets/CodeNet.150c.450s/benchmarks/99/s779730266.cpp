#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<string>
 
 
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
const int INF = 100000000;
const double EPS = 0.0000001;
typedef pair<int,int> P;


int modi[26];
int toInt(string ss) {
	int res=0;

	rep(i,ss.size()) {
		if(2<=ss[i]-'0'&&ss[i]-'0'<=9) {
			res += ((ss[i]-'0')*(modi[ss[i+1]-'a']));
			i++;
		}
		else {
			res += modi[ss[i]-'a'];
		}
	}
	return res;
}

string toMCXI(int dec) {
	string res = "";

	int ary[]={1000,100,10,1};
	string ss = "mcxi";
	rep(i,4) {
		int p = dec/ary[i];
		int q = dec%ary[i];
		//printf("[debug]%d,%d,%d,%d\n",dec,ary[3-i],p,q);
		if(p==0) {

		}
		else if(p==1) {
			res+=ss[i];
		}
		else {
			char tmp = p+'0';
			res+=tmp;
			res+=ss[i];
		}
		dec=q;
	}
	return res;
}

int n;
void solve() {
	//"m"，"c"，"x"，"i"
	modi['i'-'a'] = 1;
	modi['x'-'a'] = 10;
	modi['c'-'a'] = 100;
	modi['m'-'a'] = 1000;

	rep(i,n) {
		string ss1,ss2;
		cin>>ss1>>ss2;
		ss1 = "1"+ss1;
		ss2 = "1"+ss2;
		int add = toInt(ss1)+toInt(ss2);
		//printf("%d,%d,%d\n",toInt(ss1),toInt(ss2),add);
		cout<<toMCXI(add)<<endl;

	}
}

int main() {
	
	while (cin>>n)
	{
		if(!n) return 0;
		solve();
	}

	return 0;
}