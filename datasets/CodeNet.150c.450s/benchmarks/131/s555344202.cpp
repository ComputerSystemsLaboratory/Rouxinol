#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
typedef long long LL;
int N;
LL mi(LL a,int b){
	vector<int>v;
	//cout<<a<<endl;
	while(a!=0){
		v.push_back((a%10));
		a/=10;
		//cout<<"in"<<a%10<<endl;
	}
	for(int i=v.size();i<b;i++){
		v.push_back(0);
	}
	sort(v.begin(),v.end());
	LL now=0;
	REP(i,b){
		now*=10;
		now+=v[i];
	}
	return now;
}

LL ma(LL a,int b){
	vector<int>v;
	while(a!=0){
		v.push_back((a%10));
		a/=10;
	}
	for(int i=v.size();i<b;i++){
		v.push_back(0);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	LL now=0;
	REP(i,b){
		now*=10;
		now+=v[i];
	}
	return now;
}

int main(){
	LL a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		LL now=0;
		LL o=a;
		map<LL,int>m;
		m[a]=0;
		while(1){
			LL x=mi(o,b);
			LL y=ma(o,b);
			LL nxt=y-x;
			//cout<<x<<" "<<y<<" "<<nxt<<endl;
			if(m.count(nxt)==0){
				now++;
				m[nxt]=now;
				o=nxt;
			}else{
				o=nxt;
				break;
			}
			//cout<<o<<endl;
		}
		cout<<m[o]<<" "<<o<<" "<<now-m[o]+1<<endl;
	}
}
