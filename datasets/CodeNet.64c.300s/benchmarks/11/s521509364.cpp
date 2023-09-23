#include <iostream>
using namespace std;

int main(){
	int h,m,s;
	cin>>s;
	cout<<s/3600<<":";
	s=s%3600;
	cout<<s/60<<":"<<s%60<<endl;
	return 0;
}
