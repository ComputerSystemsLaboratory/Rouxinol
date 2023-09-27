#include<iostream>
#include<string.h>
using namespace std;

int num[2000*1500];

int main()
{
	int N,M;
	while(cin>>N>>M && N!=0){
		memset(num,0,sizeof(num));
		int h[1501],w[1501];
		h[0]=w[0]=0;

		for(int i=1;i<=N;i++){
			cin>>h[i];
			h[i]+=h[i-1];
		}

		for(int i=1;i<=M;i++){
			cin>>w[i];
			w[i]+=w[i-1];
		}

		for(int i=0;i<=N;i++){
			for(int j=i+1;j<=N;j++){
				num[h[j]-h[i]]++;
			}
		}

		int ans=0;
		for(int i=0;i<=M;i++){
			for(int j=i+1;j<=M;j++){
				ans+=num[w[j]-w[i]];
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}