#include <iostream>
using namespace std;

int s;
int n,maxn,minn,sum;
int main(){
	while(1){
		cin >> n;
		if(n==0)break;
		minn=1001;
		maxn=0;
		sum=0;
		for(int i=0;i<n;i++){
			cin >>s;
			sum+=s;
			if(maxn<s)maxn=s;
			if(minn>s)minn=s;
		}
		sum=sum-minn-maxn;
		cout <<sum/(n-2)<<endl;

	}
	return 0;
}