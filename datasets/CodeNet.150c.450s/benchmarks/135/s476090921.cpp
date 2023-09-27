#include <iostream>

using namespace std;

int max(int a,int b){
	if(a>=b)return b;
	else return a;
}

int main(){
	int n,m;

	while(cin>>n>>m){
		if(n==0 && m==0)break;

		int *h,*w;

		int *hNum,*wNum;

		h=new int[n];
		w=new int[m];

		int maxHLength=0;
		int maxWLength=0;
		for(int i=0;i<n;i++){
			cin>>h[i];
			maxHLength+=h[i];
		}
		for(int i=0;i<m;i++){
			cin>>w[i];
			maxWLength+=w[i];
		}

		hNum = new int[maxHLength+1];
		wNum = new int[maxWLength+1];

		for(int i=0;i<=maxHLength;i++){
			hNum[i]=0;
		}	

		for(int i=0;i<=maxWLength;i++){
			wNum[i]=0;
		}

		int maxLength=0;

		for(int i=0;i<n;i++){
			int length=0;
			for(int j=i;j<n;j++){
				length+=h[j];
				hNum[length]++;
			}
		}
		for(int i=0;i<m;i++){
			int length=0;
			for(int j=i;j<m;j++){
				length+=w[j];
				wNum[length]++;
			}
		}

		int sum=0;

		maxLength=max(maxHLength,maxWLength);

		for(int i=0;i<=maxLength;i++){
			sum+=hNum[i]*wNum[i];
		}

		cout<<sum<<endl;
	}

	return 0;
}