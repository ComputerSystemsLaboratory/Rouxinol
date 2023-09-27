#include <iostream>

using namespace std;

int main(){
	while(1){
		int x,y,z;
		
		int ans;
		cin>>x>>y>>z;
		if(x==0 && y==0 && z==0)break;
		
		int maxi=-1;
		int nukia,nukib,komia,komib;
		for(int i=1;i<=z/2;i++){
			for(int j=z-1;j>=1;j--){
				if(j*(100+x)/100==i){
					nukia=j;
					break;
				}
			}
			for(int j=z-1;j>=1;j--){
				if(j*(100+x)/100==z-i){
					nukib=j;
				}
			}
			int a=nukia*(100+x)/100;
			int b=nukib*(100+x)/100;
			if(a+b!=z)goto skip;

			komia=nukia*(100+y)/100;
			komib=nukib*(100+y)/100;
			maxi=max(maxi,komia+komib);
			skip:;
		}
		cout<<maxi<<endl;
	}
	return 0;
}