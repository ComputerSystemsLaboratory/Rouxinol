#include<iostream>
#include<vector>
#define max 1000010
using namespace std;

bool isp[max];
vector<int> P;

void sieve(){
	for(int i=0;i<max;i++)isp[i]=true;
	for(int i=2;i<max;i++){
		if(isp[i]){
			P.push_back(i);
			for(int j=2*i;j<max;j+=i)isp[j]=false;
		}
	}
	return;
}

int main()
{
	int n;

	sieve();
	while(cin>>n){
		int c=0;
		for(int i=0;i<P.size();i++)if(P[i]<=n)c++;
		cout<<c<<endl;
	}

	return 0;
}