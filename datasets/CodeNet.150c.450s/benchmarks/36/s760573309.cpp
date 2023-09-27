#include<iostream>

using namespace std;

int f(int x){
	return x*x;
}

int main(){
	int x;
	while(cin>>x){
		int ans=0;
		for(int i=1;i<600/x;i++)ans+=f(i*x)*x;
		cout<<ans<<endl;
	}
}