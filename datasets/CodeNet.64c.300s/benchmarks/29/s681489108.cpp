#include <bits/stdc++.h>
using namespace std;

int main(){
	int e,minn;
	while(1){
		cin>>e;
		if(e==0) break;
		minn=200000000;
		for(int z=0;z*z*z<=e;z++){
			for(int y=0;y*y+z*z*z<=e;y++){
				int x=e-(y*y+z*z*z);
				minn=min(minn,x+y+z);
			}
		}
		cout<<minn<<endl;
	}
	return 0;
}
