#include <iostream>
using namespace std;
int square[1500][1500];
int h[1500];
int w[1500];
int lenh[1500001];
int lenw[1500001];
int sum,cnt,maxh,maxw,minlen,n,m;
int main(){
	while(1){
		cin >> n>>m;
		if(n==0&&m==0)break;
		for(int i=0;i<1500001;i++){
			lenh[i]=lenw[i]=0;
		}


		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		for(int i=0;i<m;i++){
			cin>>w[i];
		}
		sum=0;
		maxh=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				sum+=h[j];
				lenh[sum]++;
			}
			if(maxh<sum)maxh=sum;
			sum=0;
		}

		sum=0;
		maxw=0;
		for(int i=0;i<m;i++){
			for(int j=i;j<m;j++){
				sum+=w[j];
				lenw[sum]++;
			}
			if(maxw<sum)maxw=sum;
			sum=0;
		}
		minlen=min(maxh,maxw);
		cnt=0;
		for(int i=0;i<=minlen;i++){
			cnt+=lenh[i]*lenw[i];
		}
		cout << cnt<<endl;
	}
}