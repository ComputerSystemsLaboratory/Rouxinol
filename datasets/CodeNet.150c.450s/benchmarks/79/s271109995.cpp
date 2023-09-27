#include<iostream>
using namespace std;
#include<vector>

int main(){
	while(1){
		int n,r;
		cin>>n>>r;
		if(n==0&&r==0)break;
		vector<int> a(n);
		for(int i = 0;i<n;i++){
			a[i]=n-i-1;
		}
		for(int i = 0;i<r;i++){
			int p,c;
			cin>>p>>c;
			for(int j=0;j<n;j++){
				if(a[j]<p-1){
					a[j]+=c;
				}else if(a[j]<p-1+c){
					a[j]-=(p-1);
				}
			}
			//cout<<i<<endl;
		}
		//cout<<"a"<<endl;
		for(int i=0;i<n;i++){
			if(a[i]==0)cout<<i+1<<endl;
		}
	}
	return 0;
}