#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp,tempa,c,i;
	while(1){
		cin >> n >> m;
		if(n==m && n==0) break;
		int a[n],b[m],suma=0,sumb=0,d=0;
		for(i=0;i<n;i++){
			cin >> a[i];
			suma+=a[i];
		}
		for(i=0;i<m;i++){
			cin >> b[i];
			sumb+=b[i];
		}
		
		for(i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<m-1;i++){
			for(int j=i+1;j<m;j++){
				if(b[i]>b[j]){
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		if(suma>sumb){
			c=suma-sumb;
			if(c%2==1){
				cout << -1 << endl;
			}else{
				c=c/2;
				for(i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(c==a[i]-b[j]){
							cout << a[i] << ' ' << b[j] << endl;
							d=1;
							break;
						}
					}
		
					if(d==1){
						break;
					}
				}
				if(i==n){
					cout << -1 << endl;
				}
			}
		}else{
			c=sumb-suma;
			if(c%2==1){
				cout << -1 << endl;
			}else{
				c=c/2;
				for(i=0;i<m;i++){
					for(int j=0;j<n;j++){
						if(c==b[i]-a[j]){
							cout << a[j] << ' ' << b[i] << endl;
							d=1;
							break;
						}
					}
					if(d==1){
						break;
					}
				}
				if(i==m){
					cout << -1 << endl;
				}
			}
		}
	}
}
