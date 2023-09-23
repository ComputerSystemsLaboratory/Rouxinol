#include<iostream>
#include<math.h>
using namespace std;
#define INF 1000000
int min(int a,int b){
	if(a<b){
		return a;
	}else {
		return b;
	}
}
int main(){
	int e;
	while(cin>>e&&e!=0){
		int m=INF;
		int x;
		for(int z=0;z*z*z<=e;z++){
			for(int y=0;z*z*z+y*y<=e;y++){
				x=e-z*z*z-y*y;
				m=min(m,x+y+z);
			}
		}
		cout<<m<<endl;
	}	
	return 0;
}