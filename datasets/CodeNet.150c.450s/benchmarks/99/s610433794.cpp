#include <iostream>
#include <sstream>

using namespace std;

int t[128];

int toint(string m)
{
	int res=0;
	for(int i=0,c=1;i<m.size();i++){
		if(isdigit(m[i]))
			c=m[i]-'0';
		else{
			res+=c*t[m[i]];
			c=1;
		}
	}
	return res;
}

string tomcxi(int n)
{
	ostringstream oss;
	for(int i=0,j=1000;i<4;n%=j,i++,j/=10){
		if(int c=n/j){
			if(c>=2)
				oss<<n/j;
			oss<<"mcxi"[i];
		}
	}
	return oss.str();
}

int main()
{
	for(int i=0,j=1000;i<4;i++,j/=10)
		t["mcxi"[i]]=j;
	
	int n; cin>>n;
	while(n--){
		string m1,m2; cin>>m1>>m2;
		cout<<tomcxi(toint(m1)+toint(m2))<<endl;
	}
	
	return 0;
}