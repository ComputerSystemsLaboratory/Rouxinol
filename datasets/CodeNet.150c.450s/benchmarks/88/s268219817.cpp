#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int w,h;
	while(cin>>h>>w){
		if(w==0&&h==0) break;
		int t=w*w+h*h,a=0,ww=w,hh=h;
		while(a==0){
			while(pow(t-(hh+1)*(hh+1),0.5)>(hh+1)){
				hh++;
				ww=pow(t-hh*hh,0.5);
				if(ww*ww+hh*hh==t){
					a++;
					break;
				}
			}
			if(a==0){
				t++;
				hh=1;
				ww=pow(t-hh*hh,0.5);
				if(ww*ww+hh*hh==t){
					a++;
				}
			}
		}
		cout<<hh<<" "<<ww<<endl;
	}
    return 0;
}