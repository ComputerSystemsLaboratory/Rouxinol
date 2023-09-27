#include <iostream>
#include <vector>

using namespace std;

#define N 1000001

int main(int argc, char const *argv[])
{
	int a,d,n;

	bool pp[N];
	int cnt;

	pp[0]=true;
	pp[1]=true;

	int i1,i2;

	for(i1=2;i1<N;i1++){
		if(pp[i1]!=true){
			for(i2=2;i2*i1<N;i2++){
				pp[i2*i1]=true;
			}
		}
	}

	while(1){
		cin>>a>>d>>n;
		if(a+d+n==0) break;

		cnt=0;
		while(1){
			if(pp[a]!=true) cnt++;
			if(cnt==n) break;

			a+=d;
		}

		cout<<a<<endl;

	}
	return 0;
}