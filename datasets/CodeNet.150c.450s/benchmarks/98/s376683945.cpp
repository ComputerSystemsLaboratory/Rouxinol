#include <iostream>
using namespace std;

int a[110],b[110];

int main(void){
	int n,m;
	while(1){
		cin >> n >> m;
		if(n==0&&m==0) break;

		int asum=0,bsum=0;

		for(int i=0;i<n;++i) cin >> a[i];
		for(int i=0;i<m;++i) cin >> b[i];

		for(int i=0;i<n;++i) asum+=a[i];
		for(int i=0;i<m;++i) bsum+=b[i];

		int aidx=-1,bidx=-1;
		int cmin=100010;

		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(asum-a[i]+b[j]==bsum-b[j]+a[i]){
					int cur=a[i]+b[j];
					if(cur<cmin){
						cmin=cur;
						aidx=i,bidx=j;
					}
				}
			}
		}

		if(aidx==-1&&bidx==-1)
			cout << -1 << endl;
		else
			cout << a[aidx] << " " << b[bidx] << endl;
	}
	return 0;
}