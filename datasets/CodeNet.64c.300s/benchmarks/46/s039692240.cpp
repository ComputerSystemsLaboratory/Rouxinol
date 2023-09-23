#include <iostream>
#include <algorithm>

#define range(i,a,b) for(int (i)=a;(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)

using namespace std;

const int maxn=1000010;

bool isprime[maxn];

void init(void){
	rep(i,maxn) isprime[i]=true;
	isprime[0]=isprime[1]=false;

	for(int i=2;i*i<=maxn;i++){
		if(isprime[i])
			for(int j=2*i;j<=maxn;j+=i)
				isprime[j]=false;
	}
	return ;
}

int main(void){
	init();
	int a,d,n;
	while(cin >> a >> d >> n,a|d|n){
		int cnt=0;
		while(1){
			if(isprime[a])
				cnt++;
			if(cnt==n)
				break;
			a+=d;
		}
		cout << a << endl;
	}
	return 0;
}