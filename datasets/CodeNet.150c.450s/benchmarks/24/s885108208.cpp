#include <iostream>

using namespace std;

void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){

	int n,m;
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		int *d,*p;
		long long int ans;
		ans = 0;
		d = new int[n];
		p = new int[n];
		for(int i=0;i<n;i++){
			cin>>d[i]>>p[i];
			ans += p[i]*d[i];
		}

		for(int i=0;i<n;i++){
			for(int j=n-1;j>i;j--){
				if(p[j]>=p[j-1]){
					swap(&p[j],&p[j-1]);
					swap(&d[j],&d[j-1]);
				}
			}
		}
		for(int i=0;i<n;i++){
			if(m>=d[i]){
				ans-=p[i]*d[i];
				m-=d[i];
			}
			else if(m<d[i]){
				ans-=p[i]*m;
				m-=m;
			}
			else if(m==0)break;
		}

		cout<<ans<<endl;
	}

	return 0;
}