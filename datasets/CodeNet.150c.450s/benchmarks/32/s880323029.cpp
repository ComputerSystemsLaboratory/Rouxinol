#include<bits//stdc++.h>
using namespace std;
int main(){
	int m,minn,maxn;
	while(cin>>m>>minn>>maxn&&m!=0){
		int a[200];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		sort(a,a+m);
		reverse(a,a+m);
		int go=-1;
		int n=0;
		for(int i=minn;i<=maxn;i++){
			if(go<a[i-1]-a[i]){
				go=a[i-1]-a[i];
				n=i;
			}
			else if(go==a[i-1]-a[i]){
				n=i;
			}
		}
		cout<<n<<endl;
	}
}