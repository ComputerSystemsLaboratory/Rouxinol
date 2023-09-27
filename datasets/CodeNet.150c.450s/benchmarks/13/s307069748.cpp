#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s, p;
	cin >>s;
	cin >>p;
	s+=s;
	if(s.find(p)==-1){
		cout <<"No" <<endl;
	}else{
		cout <<"Yes" <<endl;
	}
    return 0;
}