#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int a[100000];
int main(){
	int n,k,best,g;
	while(true){
	cin>>n>>k;
	if(n==0&&k==0)
		break;
	best=0;
	g=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i<k)
			g+=a[i];
	}
	best=g;
	for(int i=1;i<=n-k;i++){
		g+=a[i+k-1]-a[i-1];
		if(g>best)
			best=g;
	}
	cout<<best<<endl;
	}
    return 0;
}