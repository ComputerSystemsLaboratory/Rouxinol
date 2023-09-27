#include <iostream>
#define MAXN 1000001;
using namespace std;
int m,e,sum1,sum2,x,y,z,minn;
int main(){
	while(1){
		cin >>e;
		if(e==0)break;
		x=y=z=0;
		minn=MAXN;
		while(1){
			sum1=z*z*z;
			if(e<sum1)break;
			y=0;
			while(1){
				sum2=sum1+y*y;
				if(e<sum2)break;
				if(y+z+(e-sum2)<minn)minn=y+z+(e-sum2);
				y++;
			}
			z++;
		}
		cout <<minn<<endl;
	}
}