#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int a[100];
	int N;
	cin>>N;
	int count=0;
	for(int i=0;i<N;i++)cin>>a[i];
	
	for(int i=0;i<N;i++){
		for(int j=1;j<N;j++){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
				count++;
			}
		}
	}

	for(int i=0;i<N-1;i++)cout<<a[i]<<" ";
	cout<<a[N-1]<<endl;
		cout<<count<<endl;
	return 0;
}