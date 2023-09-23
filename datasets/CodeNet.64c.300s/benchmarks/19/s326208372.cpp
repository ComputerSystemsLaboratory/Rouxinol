#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		long long int a[n];
		long long int max=-100000;
		int input;
		for(int i=0;i<n;i++){
			a[i]=0;
			cin>>input;
			for(int j=0;j<=i;j++){
				a[j]+=input;
				if(max<a[j])max=a[j];
			}
		}
		cout<<max<<endl;
	}
	return 0;
}