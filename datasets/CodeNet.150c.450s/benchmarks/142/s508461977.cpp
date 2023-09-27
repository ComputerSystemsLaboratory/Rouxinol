#include<iostream>
using namespace std;
long long int a[200005];
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-k;i++){
		if(a[i]<a[i+k]){
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}

