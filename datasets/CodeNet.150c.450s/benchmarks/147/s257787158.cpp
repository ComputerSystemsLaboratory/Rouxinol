#include <iostream>
using namespace std;

int main(){
	long long N;
	cin>>N;
	long ans[N+1],function;
	for(int i=1;i<=N;i++)ans[i]=0;
	for(int x=1;x<=100;x++){
		for(int y=1;y<=100;y++){
			for(int z=1;z<=100;z++){
				function = x*x + y*y + z*z + x*y + y*z + z*x ;
				if(function<=N)ans[function]+=1;
			}
		}
	}
	for(int i=1;i<=N;i++){
		cout<<ans[i]<<endl;
	}
}
