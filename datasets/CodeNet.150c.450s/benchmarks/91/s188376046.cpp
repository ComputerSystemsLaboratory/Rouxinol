#include<bits//stdc++.h>
using namespace std;
int a[1000500];
int main(){
	for(int i=2;i*i<1000500;i++){
		for(int j=i*2;j<1000500;j+=i){
			a[j]=1;
		}
	}
	int b;
	while(cin>>b){
		int c=0;
		for(int i=2;i<=b;i++){
			if(a[i]==0) c++;
		}
		cout<<c<<endl;
	}
}