#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int e;
	while(cin >> e,e){
		int minn = e;
		int res;
		for(int y=0;y<=e/2;y++){
			if(y*y > e) break;
			for(int z=0;z<=e/3;z++){
				if(z*z*z+y*y > e) break;
				int x = e - y*y - z*z*z;
				res = x + y + z;
				if(res < minn){
					minn = res;
				}
			}
		}
		cout << minn << endl;
	}
	return 0;
}