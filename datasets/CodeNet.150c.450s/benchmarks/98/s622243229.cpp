#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m,n,m){
		int a[120],b[120];
		int A = 0,B = 0;
		for(int i = 0;i < n;i++){
			cin>>a[i];
			A += a[i];
		}
		for(int i = 0;i < m;i++){
			cin>>b[i];
			B += b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		int best = 1e9,x = -1,y = -1;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				int X = A-a[i]+b[j];
				int Y = B-b[j]+a[i];
				if(X==Y){
					if(a[i]+b[j]<best){
						best = a[i]+b[j];
						x = a[i],y = b[j];
					}
				}
			}
		}
		cout<<x;
		if(x!=-1)cout<<" "<<y;
		cout<<endl;
	}

	return 0;
}