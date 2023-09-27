#include<iostream>
using namespace std;

int main()
{
	int w,h;
	while(cin>>h>>w){
		if(w==0 && h==0) break;
		const int d=h*h+w*w;
		int min_d=1000*1000,min_h=1000;
		int ans_w,ans_h;
		for(int nw=1;nw<=200;nw++){
			for(int nh=1;nh<nw;nh++){
				const int nd=nw*nw+nh*nh;
				if(d>nd || (nd==d && h>=nh)) continue;
				if(min_d>nd || (min_d==nd && nh<min_h)){
					min_d=nd;
					min_h=nh;
					ans_w=nw;
					ans_h=nh;
				}
			}
		}
		cout<<ans_h<<" "<<ans_w<<endl;
	}
	return 0;
}