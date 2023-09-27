#include<iostream>
using namespace std;

int main(){
	int e;
	while(true){
		cin >> e;
		if(e==0){
			break;
		}
		int x=0,y=0,z=0;
		
		int ans = e;

		for(z=0;z*z*z <= e;z++){
			for(y=0;y*y+z*z*z <= e; y++){
				int buf = e - (y*y+z*z*z);
				ans = min(ans,buf+y+z);
			}
		}


		cout << ans <<endl;
		/*
		for(x=0;x<=e;x++){
			for(y=0;y*y+x<=e;y++){
				for(z=0;z*z*z+y*y+x<=e;z++){
					if(z*z*z+y*y+x==e){
						ans = min(ans,x+y+z);
					}
				}
			}
		}
		cout << ans << endl;
		*/
	}
}