#include <iostream>
using namespace std;

int main() {
	int time,h,m,s;
	cin>>time;
	
	h = time/3600;
	time-=3600*h;
	m = time/60;
	s=time-60*m;
	
	
	cout<<h<<":"<<m<<":"<<s<<endl;
	
	
	return 0;
}