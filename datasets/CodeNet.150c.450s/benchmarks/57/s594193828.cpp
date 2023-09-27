#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	int i;
	string op;
	for(;;){
		cin>>a>>op>>b;
		if(op == "+"){
			i = a+b;
		} else if(op == "-"){
			i = a-b;
		} else if(op == "*"){
			i = a*b;
		} else if(op == "/"){
			i = a/b;
		} else if(op == "?"){
			break;
		}
		cout<<i<<endl;
	}

	return 0;
}