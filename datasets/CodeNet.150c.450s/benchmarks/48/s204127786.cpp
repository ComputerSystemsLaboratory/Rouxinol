#include<iostream>
#include<climits>
using namespace std;
	int main(){
		int e,m,p,q,r,min,x;
		while(cin>>e,e){
			min=INT_MAX;
			for(int z=0;z*z*z<=e;z++)
			for(int y=0;y*y+z*z*z<=e;y++){
				x=e-z*z*z-y*y;
				if(x+y+z<min)
				min=x+y+z;
			}
			cout<<min<<endl;
		}
		return 0;
	}