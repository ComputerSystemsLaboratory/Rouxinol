#include<iostream>
using namespace std;
int main(){
	int h,m,s;
	cin>>s;
	cout<<s/3600<<":"<<s%3600/60<<":"<<s%3600%60<<endl;
	return 0;
}
