#include <iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	int h,m,s;
	
	h=time/3600;
	time=time-3600*h;
	m=time/60;
	time=time-m*60;
	s=time;
	
	
	cout<<h<<':'<<m<<':'<<s<<endl;
	
	
}
