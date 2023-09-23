#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int e;
	while(cin>>e){
		if(e==0) break;
		int m=e,x,ct=0;
		for(int z=pow(e,0.333333333333333334)+1;z>=0;z--){
			for(int y=0;y<pow(e-z*z*z,0.5)+1;y++){
				if(e-z*z*z-y*y>=0){
					x=e-z*z*z-y*y;
					m=min(m,x+y+z);
					ct++;
					if(ct>10000){
						goto end;
					}
				}
				else{
					break;
				}
			}
		}
		end:;
		cout<<m<<endl;
	}
    return 0;
}