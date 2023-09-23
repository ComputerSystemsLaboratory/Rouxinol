#include <iostream>

using namespace std;

int func(int y,int z,int e){
	return y+z+e-y*y-z*z*z;
}

int main(){

	int e;

	while(cin>>e){
		if(e==0)break;

		int min=10000000;

		for(int y=0;y*y<=e;y++){
			for(int z=0;(z*z*z+y*y)<=e;z++){
				int ans = func(y,z,e);
				
			//	cout<<"y="<<y<<"z="<<z<<endl;
				if(ans<=0)break;

				if(min>=ans){
					min=ans;
				}

			}
		}

		cout<<min<<endl;

	}

	return 0;
}