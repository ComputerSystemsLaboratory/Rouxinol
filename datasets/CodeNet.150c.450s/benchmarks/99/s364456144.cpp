#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define mp(a,b) make_pair(a,b)
using namespace std;

int main(){
	int n;
	cin>>n;
	map<char,int> m;
	m['m']=1000;
	m['c']=100;
	m['x']=10;
	m['i']=1;
	REP(z,0,n){
		string left,right,ans;
		int lnum=0,rnum=0;
		cin>>left>>right;
		for(unsigned int i=0;i<left.size();i++){
			if(left[i]=='m'||left[i]=='c'||left[i]=='x'||left[i]=='i'){
				lnum+=m[left[i]];
			}else{
				lnum+=stoi(&left[i])*m[left[i+1]];
				i++;
			}
		}
		for(unsigned int i=0;i<right.size();i++){
			if(right[i]=='m'||right[i]=='c'||right[i]=='x'||right[i]=='i'){
				rnum+=m[right[i]];
			}else{
				rnum+=stoi(&right[i])*m[right[i+1]];
				i++;
			}
		}
		lnum+=rnum;
		if(lnum/1000>1)	ans+=to_string(lnum/1000);
		if(lnum/1000>0) ans+='m';
		lnum%=1000;
		if(lnum/100>1)	ans+=to_string(lnum/100);
		if(lnum/100>0)	ans+='c';
		lnum%=100;
		if(lnum/10>1)	ans+=to_string(lnum/10);
		if(lnum/10>0) 	ans+='x';
		lnum%=10;
		if(lnum>1)		ans+=to_string(lnum);
		if(lnum>0)		ans+='i';

		p(ans);
	}

	return 0;
}