#include <iostream>
using namespace std;

int main() {
	int in,h,m;
	cin>>in;
	h=in/3600;
	in-=h*3600;
	m=in/60;
	in-=m*60;
	cout<<h<<":"<<m<<":"<<in<<endl;;
	return 0;
}