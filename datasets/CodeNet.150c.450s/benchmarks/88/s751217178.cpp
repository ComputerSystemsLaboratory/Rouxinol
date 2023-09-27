#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int h,w;
	while(cin>>h>>w,h){
		int mi_h = 1e8,mi_w = 1e8,mi = 1e8;
		int norm2 = h*h+w*w;
		for(int i = 1;i < 160;i++){
			for(int j = i+1;j < 160;j++){
				int sc2 = i*i+j*j;
				if(sc2 < norm2)continue;
				if(sc2 == norm2 && i <= h)continue;
				int diff = abs(norm2 - sc2);
				if(mi == diff ? mi_h > i : mi > diff){
					mi_h = i,mi_w = j;
					mi = diff;
				}
			}
		}
		cout<<mi_h<<" "<<mi_w<<endl;
	}
}