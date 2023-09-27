#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	while(cin>>a){
		string buf = "";
		for(int i=a.size()-1; i>=0; i--){
			buf += a[i];
		}
		cout<<buf<<endl;
	}
	return 0;
}