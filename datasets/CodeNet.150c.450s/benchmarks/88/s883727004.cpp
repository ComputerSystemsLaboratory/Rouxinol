#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int h,w,s;
	while(true){
	cin>>h>>w;
	if(h==0&&w==0)
		break;
	bool t=true;
	s=h*h+w*w;
	h++;
	while(true){
		if(h*h>=s-h*h)
			break;
		if(s==h*h+(int)sqrt((double)s-h*h+0.0)*(int)sqrt((double)s-h*h+0.0)){
			t=false;
			break;
		}
		h++;
	}
	s++;
	if(t==true){
	while(true){
		h=1;
		while(true){
		if(h*h>=s-h*h)
			break;
		if(s==h*h+((int)sqrt((double)s-h*h+0.0)*(int)sqrt((double)s-h*h+0.0))){
			t=false;
			break;
		}
		h++;
		}
		if(t==false)
			break;
		s++;
	}
	}
	cout<<h<<" "<<(int)sqrt((double)s-h*h+0.0)<<endl;
	}
	return 0;
}