#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string a,b;
	int i=0,j=0,an,bn,count=0;
	cin >> a;
	cin >> b;
	a += a;
	an = a.size();
	bn = b.size();
	
	if(a.find(b)!=std::string::npos){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	
	return 0;
}
	