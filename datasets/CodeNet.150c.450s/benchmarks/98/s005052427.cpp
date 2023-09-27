#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int n,m;
	while(1){
		cin >> n >>m;
		vector<int> a(n),b(m);
		if(n==0 && m==0) break;
		cinf(n,a); cinf(m,b);
		int suma=0; int sumb=0;
		for (int i = 0; i < n; ++i)
			suma+=a[i];
		for(int i=0;i<m;i++)
			sumb+=b[i];
		int ansa=150; int ansb=150;
		if(suma>sumb){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(suma-sumb == (a[i]-b[j])*2 && b[j]+a[i]<ansa+ansb){
						ansa=a[i]; ansb=b[j];
                    }
				}
			}
		}
		else if(suma == sumb){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(a[i]==b[j] && ansa>a[i]){
						ansa = a[i]; ansb = b[j];
				    }
				}
			}
		}
		else {
			for(int j=0;j<m;j++){
				for(int i=0;i<n;i++){
					if(sumb-suma ==(b[j]-a[i])*2 && b[j]+a[i]<ansa+ansb){
						ansa=a[i]; ansb=b[j];
                    }
				}
			}

		}
		if(ansa==150) cout << -1 << endl;
		else cout << ansa <<" "<< ansb << endl;
		}
}
