#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 1000001
using namespace std;

long long min(long long a,long long b){
	if(a<b)return a;
	else return b;
}

int main(){
	long long e;
	while(cin>>e,e){
		long long m=INF;
		rep(i,min(e+1,1001)){
			rep(j,min(e+1,101)){
				if((e-i*i-j*j*j)<0)continue;
				if(m>(e-i*i-j*j*j+i+j))m=e-i*i-j*j*j+i+j;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}